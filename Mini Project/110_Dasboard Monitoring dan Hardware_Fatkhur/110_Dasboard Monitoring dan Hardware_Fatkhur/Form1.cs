using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _110_Dasboard_Monitoring_dan_Hardware_Fatkhur
{
    public partial class Form1 : Form
    {
        int progressValue = 0;
        int nomorLog = 1;
        bool isConnected = false;
        public Form1()
        {
            InitializeComponent();
            
            cmbPort.Items.Add("COM1");
            cmbPort.Items.Add("COM2");
            cmbPort.Items.Add("COM3");
            cmbPort.Items.Add("COM4");
            cmbPort.Items.Add("COM5");

            cmbPort.SelectedIndex = 0;

            timerJam.Interval = 1000;
            timerJam.Start();

            progressConnect.Minimum = 0;
            progressConnect.Maximum = 100;
            progressConnect.Value = 0;

            trackPWM.Minimum = 0;
            trackPWM.Maximum = 255;
            trackPWM.Value = 0;

            numPWM.Minimum = 0;
            numPWM.Maximum = 255;
            numPWM.Value = 0;

            lblPWM.Text = "PWM: 0";

            rbManual.Checked = true;

            lblStatus.Text = "Status: Disconnected";
            lblStatus.ForeColor = Color.Red;

            panelIndikator.BackColor = Color.Gray;
            lblInfoPanel.Text = "Panel indikator status hardware";

            picStatus.Image = BuatIndikator(Color.Red);
            picStatus.SizeMode = PictureBoxSizeMode.StretchImage;

            dgvLog.Columns.Clear();
            dgvLog.Columns.Add("No", "No");
            dgvLog.Columns.Add("Waktu", "Waktu");
            dgvLog.Columns.Add("Parameter", "Parameter");
            dgvLog.Columns.Add("Status", "Status");
            dgvLog.Columns.Add("Tanggal", "Tanggal");

            dgvLog.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;

            TambahLog("Sistem", "Aplikasi dimulai");
        }
        private Bitmap BuatIndikator(Color warna)
        {
            Bitmap bmp = new Bitmap(100, 100);

            using (Graphics g = Graphics.FromImage(bmp))
            {
                g.Clear(Color.White);
                Brush brush = new SolidBrush(warna);
                g.FillEllipse(brush, 10, 10, 80, 80);
                g.DrawEllipse(Pens.Black, 10, 10, 80, 80);
            }

            return bmp;
        }
        private void bukaKonfigurasiToolStripMenuItem_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFile = new OpenFileDialog();
            openFile.Filter = "File Konfigurasi|*.txt;*.json|Text File|*.txt|JSON File|*.json";

            if (openFile.ShowDialog() == DialogResult.OK)
            {
                TambahLog("File Konfigurasi", "Membuka file: " + openFile.FileName);

                MessageBox.Show(
                    "File konfigurasi berhasil dibuka:\n" + openFile.FileName,
                    "Sukses",
                    MessageBoxButtons.OK,
                    MessageBoxIcon.Information
                );
            }
            else
            {
                TambahLog("File Konfigurasi", "Buka file dibatalkan");
            }
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void lblPWM_Click(object sender, EventArgs e)
        {

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if (rbOtomatis.Checked)
            {
                TambahLog("Mode Operasi", "Mode Otomatis aktif");
            }
        }

        private void lblPort_Click(object sender, EventArgs e)
        {

        }

        private void lblJam_Click(object sender, EventArgs e)
        {

        }

        private void timerJam_Tick(object sender, EventArgs e)
        {
            lblJam.Text = DateTime.Now.ToString("HH:mm:ss");
        }

        private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {

        }

        private void timerConnect_Tick(object sender, EventArgs e)
        {
            if (progressValue < 100)
            {
                progressValue += 5;
                progressConnect.Value = progressValue;
            }
            else
            {
                timerConnect.Stop();

                isConnected = true;

                lblStatus.Text = "Status: Connected";
                lblStatus.ForeColor = Color.Green;

                panelIndikator.BackColor = Color.Green;
                picStatus.Image = BuatIndikator(Color.Green);

                btnConnect.Enabled = true;
                btnConnect.Text = "Reconnect";

                lstRiwayatKoneksi.Items.Add(
                    DateTime.Now.ToString("HH:mm:ss") +
                    " - Koneksi berhasil ke " + cmbPort.Text
                );

                TambahLog("Koneksi", "Berhasil terkoneksi ke " + cmbPort.Text);

                MessageBox.Show("Koneksi berhasil!", "Informasi",
                    MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
        }

        private void btnConnect_Click(object sender, EventArgs e)
        {
            if (txtOperator.Text.Trim() == "")
            {
                MessageBox.Show("Nama operator harus diisi!", "Peringatan",
                    MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return;
            }

            if (cmbPort.Text == "")
            {
                MessageBox.Show("Port komunikasi harus dipilih!", "Peringatan",
                    MessageBoxButtons.OK, MessageBoxIcon.Warning);
                return;
            }

            progressValue = 0;
            progressConnect.Value = 0;

            lblStatus.Text = "Status: Connecting...";
            lblStatus.ForeColor = Color.Orange;

            btnConnect.Enabled = false;

            lstRiwayatKoneksi.Items.Add(
                DateTime.Now.ToString("HH:mm:ss") +
                " - " + txtOperator.Text +
                " mencoba koneksi ke " + cmbPort.Text
            );

            TambahLog("Koneksi", "Mencoba koneksi ke " + cmbPort.Text);

            timerConnect.Start();
        }

        private void trackPWM_Scroll(object sender, EventArgs e)
        {
            numPWM.Value = trackPWM.Value;
            lblPWM.Text = "PWM: " + trackPWM.Value;

            TambahLog("PWM", "Nilai PWM diubah menjadi " + trackPWM.Value);
        }

        private void numPWM_ValueChanged(object sender, EventArgs e)
        {
            trackPWM.Value = (int)numPWM.Value;
            lblPWM.Text = "PWM: " + numPWM.Value;

            TambahLog("PWM", "Nilai PWM diubah menjadi " + numPWM.Value);
        }

        private void rbManual_CheckedChanged(object sender, EventArgs e)
        {
            if (rbManual.Checked)
            {
                TambahLog("Mode Operasi", "Mode Manual aktif");
            }
        }

        private void panelIndikator_Paint(object sender, PaintEventArgs e)
        {

        }

        private void picStatus_Click(object sender, EventArgs e)
        {

        }

        private void panelIndikator_MouseHover(object sender, EventArgs e)
        {
            if (isConnected)
            {
                lblInfoPanel.Text = "Hardware terkoneksi. Sistem siap digunakan.";
                panelIndikator.BackColor = Color.LightGreen;
            }
            else
            {
                lblInfoPanel.Text = "Hardware belum terkoneksi.";
                panelIndikator.BackColor = Color.LightCoral;
            }
        }

        private void panelIndikator_MouseLeave(object sender, EventArgs e)
        {
            if (isConnected)
            {
                panelIndikator.BackColor = Color.Green;
            }
            else
            {
                panelIndikator.BackColor = Color.Gray;
            }

            lblInfoPanel.Text = "Panel indikator status hardware";
        }

        private void panelIndikator_MouseClick(object sender, MouseEventArgs e)
        {
            if (isConnected)
            {
                MessageBox.Show("Status hardware: CONNECTED");
            }
            else
            {
                MessageBox.Show("Status hardware: DISCONNECTED");
            }
        }

        private void lstRiwayatKoneksi_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void dgvLog_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void lblInfoPanel_Click(object sender, EventArgs e)
        {

        }

        private void progressConnect_Click(object sender, EventArgs e)
        {

        }

        private void cmbPort_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void txtOperator_TextChanged(object sender, EventArgs e)
        {

        }

        private void lblOperator_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        private void tampilkanLogToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show(
                "Jumlah log saat ini: " + dgvLog.Rows.Count,
                "Informasi Log",
                MessageBoxButtons.OK,
                MessageBoxIcon.Information
            );
        }
        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            DialogResult hasil = MessageBox.Show(
                "Apakah Anda yakin ingin keluar?",
                "Konfirmasi",
                MessageBoxButtons.YesNo,
                MessageBoxIcon.Question
            );

            if (hasil == DialogResult.Yes)
            {
                Application.Exit();
            }
        }
        private void dtpFilterTanggal_ValueChanged(object sender, EventArgs e)
        {
            string tanggalDipilih = dtpFilterTanggal.Value.ToString("dd/MM/yyyy");

            foreach (DataGridViewRow row in dgvLog.Rows)
            {
                if (row.IsNewRow) continue;

                string tanggalLog = row.Cells["Tanggal"].Value.ToString();

                row.Visible = tanggalLog == tanggalDipilih;
            }
        }


        private void TambahLog(string parameter, string status)
        {
            if (dgvLog.Columns.Count == 0) return;
            // existing Rows.Add...
        }
        private void btnResetFilter_Click(object sender, EventArgs e)
        {
            foreach (DataGridViewRow row in dgvLog.Rows)
            {
                if (!row.IsNewRow)
                {
                    row.Visible = true;
                }
            }
        }
    }
}
