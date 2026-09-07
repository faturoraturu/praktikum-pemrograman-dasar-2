using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _110_Muhammad_Fatkhur_Rohman_Mini_Project1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        
        }

        private void btnBukaFile_Click(object sender, EventArgs e)
        {
            
        }

        private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {
            Application.Exit();
        }

  

        private void toolStripMenuItem1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void toolStripMenuItem2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void flowLayoutPanel1_Paint(object sender, PaintEventArgs e)
        {
        }

        

        private void panelStatus_MouseClick(object sender, MouseEventArgs e)
        {
            MessageBox.Show("Panel status diklik.");
        }

        private void timerJam_Tick(object sender, EventArgs e)
        {
        }

        private void lblPWM_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
         
        }

        private void progressBar1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            openFileDialog1.Filter = "Image File|*.jpg;*.png;*.bmp";

            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
           
            }
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
 
        }

        private void dateTimePicker1_ValueChanged(object sender, EventArgs e)
        {
            lblTanggal.Text = dateTimePicker1.Value.ToString("dd/MM/yyyy");
        }
    }
}

