namespace _110_Dasboard_Monitoring_dan_Hardware_Fatkhur
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.fileToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.bukaKonfigurasiToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.tampilkanLogToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exitToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.lblOperator = new System.Windows.Forms.Label();
            this.txtOperator = new System.Windows.Forms.TextBox();
            this.lblPort = new System.Windows.Forms.Label();
            this.cmbPort = new System.Windows.Forms.ComboBox();
            this.btnConnect = new System.Windows.Forms.Button();
            this.lblStatus = new System.Windows.Forms.Label();
            this.lstRiwayatKoneksi = new System.Windows.Forms.ListBox();
            this.lblJam = new System.Windows.Forms.Label();
            this.timerJam = new System.Windows.Forms.Timer(this.components);
            this.lblPWM = new System.Windows.Forms.Label();
            this.trackPWM = new System.Windows.Forms.TrackBar();
            this.numPWM = new System.Windows.Forms.NumericUpDown();
            this.progressConnect = new System.Windows.Forms.ProgressBar();
            this.timerConnect = new System.Windows.Forms.Timer(this.components);
            this.rbManual = new System.Windows.Forms.RadioButton();
            this.rbOtomatis = new System.Windows.Forms.RadioButton();
            this.chkPendingin = new System.Windows.Forms.CheckBox();
            this.picStatus = new System.Windows.Forms.PictureBox();
            this.panelIndikator = new System.Windows.Forms.FlowLayoutPanel();
            this.lblInfoPanel = new System.Windows.Forms.Label();
            this.dgvLog = new System.Windows.Forms.DataGridView();
            this.dtpFilterTanggal = new System.Windows.Forms.DateTimePicker();
            this.btnResetFilter = new System.Windows.Forms.Button();
            this.menuStrip1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackPWM)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.numPWM)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.picStatus)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dgvLog)).BeginInit();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.GripMargin = new System.Windows.Forms.Padding(2, 2, 0, 2);
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(24, 24);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.fileToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(1078, 33);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            this.menuStrip1.ItemClicked += new System.Windows.Forms.ToolStripItemClickedEventHandler(this.menuStrip1_ItemClicked);
            // 
            // fileToolStripMenuItem
            // 
            this.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.bukaKonfigurasiToolStripMenuItem,
            this.tampilkanLogToolStripMenuItem,
            this.exitToolStripMenuItem});
            this.fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            this.fileToolStripMenuItem.Size = new System.Drawing.Size(54, 29);
            this.fileToolStripMenuItem.Text = "File";
            // 
            // bukaKonfigurasiToolStripMenuItem
            // 
            this.bukaKonfigurasiToolStripMenuItem.Name = "bukaKonfigurasiToolStripMenuItem";
            this.bukaKonfigurasiToolStripMenuItem.Size = new System.Drawing.Size(246, 34);
            this.bukaKonfigurasiToolStripMenuItem.Text = "Buka Konfigurasi";
            // 
            // tampilkanLogToolStripMenuItem
            // 
            this.tampilkanLogToolStripMenuItem.Name = "tampilkanLogToolStripMenuItem";
            this.tampilkanLogToolStripMenuItem.Size = new System.Drawing.Size(246, 34);
            this.tampilkanLogToolStripMenuItem.Text = "Tampilkan Log";
            // 
            // exitToolStripMenuItem
            // 
            this.exitToolStripMenuItem.Name = "exitToolStripMenuItem";
            this.exitToolStripMenuItem.Size = new System.Drawing.Size(246, 34);
            this.exitToolStripMenuItem.Text = "Exit";
            // 
            // lblOperator
            // 
            this.lblOperator.AutoSize = true;
            this.lblOperator.Location = new System.Drawing.Point(58, 49);
            this.lblOperator.Name = "lblOperator";
            this.lblOperator.Size = new System.Drawing.Size(118, 20);
            this.lblOperator.TabIndex = 1;
            this.lblOperator.Text = "Nama Operator";
            this.lblOperator.Click += new System.EventHandler(this.lblOperator_Click);
            // 
            // txtOperator
            // 
            this.txtOperator.Location = new System.Drawing.Point(229, 49);
            this.txtOperator.Name = "txtOperator";
            this.txtOperator.Size = new System.Drawing.Size(175, 26);
            this.txtOperator.TabIndex = 2;
            this.txtOperator.TextChanged += new System.EventHandler(this.txtOperator_TextChanged);
            // 
            // lblPort
            // 
            this.lblPort.AutoSize = true;
            this.lblPort.Location = new System.Drawing.Point(449, 55);
            this.lblPort.Name = "lblPort";
            this.lblPort.Size = new System.Drawing.Size(123, 20);
            this.lblPort.TabIndex = 3;
            this.lblPort.Text = "Port Komunikasi";
            this.lblPort.Click += new System.EventHandler(this.lblPort_Click);
            // 
            // cmbPort
            // 
            this.cmbPort.FormattingEnabled = true;
            this.cmbPort.Location = new System.Drawing.Point(591, 55);
            this.cmbPort.Name = "cmbPort";
            this.cmbPort.Size = new System.Drawing.Size(111, 28);
            this.cmbPort.TabIndex = 4;
            this.cmbPort.SelectedIndexChanged += new System.EventHandler(this.cmbPort_SelectedIndexChanged);
            // 
            // btnConnect
            // 
            this.btnConnect.Location = new System.Drawing.Point(492, 429);
            this.btnConnect.Name = "btnConnect";
            this.btnConnect.Size = new System.Drawing.Size(95, 36);
            this.btnConnect.TabIndex = 5;
            this.btnConnect.Text = "Connect";
            this.btnConnect.UseVisualStyleBackColor = true;
            this.btnConnect.Click += new System.EventHandler(this.btnConnect_Click);
            // 
            // lblStatus
            // 
            this.lblStatus.AutoSize = true;
            this.lblStatus.Location = new System.Drawing.Point(225, 96);
            this.lblStatus.Name = "lblStatus";
            this.lblStatus.Size = new System.Drawing.Size(166, 20);
            this.lblStatus.TabIndex = 6;
            this.lblStatus.Text = "Status : Disconnected";
            this.lblStatus.Click += new System.EventHandler(this.label1_Click);
            // 
            // lstRiwayatKoneksi
            // 
            this.lstRiwayatKoneksi.FormattingEnabled = true;
            this.lstRiwayatKoneksi.ItemHeight = 20;
            this.lstRiwayatKoneksi.Location = new System.Drawing.Point(62, 429);
            this.lstRiwayatKoneksi.Name = "lstRiwayatKoneksi";
            this.lstRiwayatKoneksi.Size = new System.Drawing.Size(383, 124);
            this.lstRiwayatKoneksi.TabIndex = 7;
            this.lstRiwayatKoneksi.SelectedIndexChanged += new System.EventHandler(this.lstRiwayatKoneksi_SelectedIndexChanged);
            // 
            // lblJam
            // 
            this.lblJam.AutoSize = true;
            this.lblJam.Location = new System.Drawing.Point(429, 96);
            this.lblJam.Name = "lblJam";
            this.lblJam.Size = new System.Drawing.Size(71, 20);
            this.lblJam.TabIndex = 8;
            this.lblJam.Text = "00:00:00";
            this.lblJam.Click += new System.EventHandler(this.lblJam_Click);
            // 
            // timerJam
            // 
            this.timerJam.Enabled = true;
            this.timerJam.Interval = 1000;
            this.timerJam.Tick += new System.EventHandler(this.timerJam_Tick);
            // 
            // lblPWM
            // 
            this.lblPWM.AutoSize = true;
            this.lblPWM.Location = new System.Drawing.Point(76, 166);
            this.lblPWM.Name = "lblPWM";
            this.lblPWM.Size = new System.Drawing.Size(47, 20);
            this.lblPWM.TabIndex = 9;
            this.lblPWM.Text = "PWM";
            this.lblPWM.Click += new System.EventHandler(this.lblPWM_Click);
            // 
            // trackPWM
            // 
            this.trackPWM.Location = new System.Drawing.Point(62, 189);
            this.trackPWM.Maximum = 255;
            this.trackPWM.Name = "trackPWM";
            this.trackPWM.Size = new System.Drawing.Size(311, 69);
            this.trackPWM.TabIndex = 10;
            this.trackPWM.Scroll += new System.EventHandler(this.trackPWM_Scroll);
            // 
            // numPWM
            // 
            this.numPWM.Location = new System.Drawing.Point(424, 199);
            this.numPWM.Maximum = new decimal(new int[] {
            255,
            0,
            0,
            0});
            this.numPWM.Name = "numPWM";
            this.numPWM.Size = new System.Drawing.Size(119, 26);
            this.numPWM.TabIndex = 11;
            this.numPWM.ValueChanged += new System.EventHandler(this.numPWM_ValueChanged);
            // 
            // progressConnect
            // 
            this.progressConnect.Location = new System.Drawing.Point(229, 135);
            this.progressConnect.Name = "progressConnect";
            this.progressConnect.Size = new System.Drawing.Size(100, 23);
            this.progressConnect.TabIndex = 12;
            this.progressConnect.Click += new System.EventHandler(this.progressConnect_Click);
            // 
            // timerConnect
            // 
            this.timerConnect.Tick += new System.EventHandler(this.timerConnect_Tick);
            // 
            // rbManual
            // 
            this.rbManual.AutoSize = true;
            this.rbManual.Location = new System.Drawing.Point(71, 245);
            this.rbManual.Name = "rbManual";
            this.rbManual.Size = new System.Drawing.Size(86, 24);
            this.rbManual.TabIndex = 13;
            this.rbManual.TabStop = true;
            this.rbManual.Text = "Manual";
            this.rbManual.UseVisualStyleBackColor = true;
            this.rbManual.CheckedChanged += new System.EventHandler(this.rbManual_CheckedChanged);
            // 
            // rbOtomatis
            // 
            this.rbOtomatis.AutoSize = true;
            this.rbOtomatis.Location = new System.Drawing.Point(172, 245);
            this.rbOtomatis.Name = "rbOtomatis";
            this.rbOtomatis.Size = new System.Drawing.Size(98, 24);
            this.rbOtomatis.TabIndex = 14;
            this.rbOtomatis.TabStop = true;
            this.rbOtomatis.Text = "Otomatis";
            this.rbOtomatis.UseVisualStyleBackColor = true;
            this.rbOtomatis.CheckedChanged += new System.EventHandler(this.radioButton1_CheckedChanged);
            // 
            // chkPendingin
            // 
            this.chkPendingin.AutoSize = true;
            this.chkPendingin.Location = new System.Drawing.Point(71, 275);
            this.chkPendingin.Name = "chkPendingin";
            this.chkPendingin.Size = new System.Drawing.Size(220, 24);
            this.chkPendingin.TabIndex = 15;
            this.chkPendingin.Text = "Aktifkan Sistem Pendingin";
            this.chkPendingin.UseVisualStyleBackColor = true;
            // 
            // picStatus
            // 
            this.picStatus.Location = new System.Drawing.Point(71, 314);
            this.picStatus.Name = "picStatus";
            this.picStatus.Size = new System.Drawing.Size(143, 100);
            this.picStatus.TabIndex = 16;
            this.picStatus.TabStop = false;
            this.picStatus.Click += new System.EventHandler(this.picStatus_Click);
            // 
            // panelIndikator
            // 
            this.panelIndikator.BackColor = System.Drawing.Color.Gray;
            this.panelIndikator.Location = new System.Drawing.Point(229, 314);
            this.panelIndikator.Name = "panelIndikator";
            this.panelIndikator.Size = new System.Drawing.Size(200, 100);
            this.panelIndikator.TabIndex = 17;
            this.panelIndikator.Paint += new System.Windows.Forms.PaintEventHandler(this.panelIndikator_Paint);
            this.panelIndikator.MouseClick += new System.Windows.Forms.MouseEventHandler(this.panelIndikator_MouseClick);
            this.panelIndikator.MouseLeave += new System.EventHandler(this.panelIndikator_MouseLeave);
            this.panelIndikator.MouseHover += new System.EventHandler(this.panelIndikator_MouseHover);
            // 
            // lblInfoPanel
            // 
            this.lblInfoPanel.AutoSize = true;
            this.lblInfoPanel.Location = new System.Drawing.Point(488, 324);
            this.lblInfoPanel.Name = "lblInfoPanel";
            this.lblInfoPanel.Size = new System.Drawing.Size(249, 20);
            this.lblInfoPanel.TabIndex = 18;
            this.lblInfoPanel.Text = "Arahkan mouse ke panel indikator";
            this.lblInfoPanel.Click += new System.EventHandler(this.lblInfoPanel_Click);
            // 
            // dgvLog
            // 
            this.dgvLog.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvLog.Location = new System.Drawing.Point(62, 571);
            this.dgvLog.Name = "dgvLog";
            this.dgvLog.RowHeadersWidth = 62;
            this.dgvLog.RowTemplate.Height = 28;
            this.dgvLog.Size = new System.Drawing.Size(383, 112);
            this.dgvLog.TabIndex = 19;
            this.dgvLog.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dgvLog_CellContentClick);
            // 
            // dtpFilterTanggal
            // 
            this.dtpFilterTanggal.Location = new System.Drawing.Point(492, 363);
            this.dtpFilterTanggal.Name = "dtpFilterTanggal";
            this.dtpFilterTanggal.Size = new System.Drawing.Size(281, 26);
            this.dtpFilterTanggal.TabIndex = 20;
            this.dtpFilterTanggal.ValueChanged += new System.EventHandler(this.dtpFilterTanggal_ValueChanged);
            // 
            // btnResetFilter
            // 
            this.btnResetFilter.Location = new System.Drawing.Point(606, 429);
            this.btnResetFilter.Name = "btnResetFilter";
            this.btnResetFilter.Size = new System.Drawing.Size(96, 58);
            this.btnResetFilter.TabIndex = 21;
            this.btnResetFilter.Text = "Reset Filter";
            this.btnResetFilter.UseVisualStyleBackColor = true;
            this.btnResetFilter.Click += new System.EventHandler(this.btnResetFilter_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1078, 1050);
            this.Controls.Add(this.btnResetFilter);
            this.Controls.Add(this.dtpFilterTanggal);
            this.Controls.Add(this.dgvLog);
            this.Controls.Add(this.lblInfoPanel);
            this.Controls.Add(this.panelIndikator);
            this.Controls.Add(this.picStatus);
            this.Controls.Add(this.chkPendingin);
            this.Controls.Add(this.rbOtomatis);
            this.Controls.Add(this.rbManual);
            this.Controls.Add(this.progressConnect);
            this.Controls.Add(this.numPWM);
            this.Controls.Add(this.trackPWM);
            this.Controls.Add(this.lblPWM);
            this.Controls.Add(this.lblJam);
            this.Controls.Add(this.lstRiwayatKoneksi);
            this.Controls.Add(this.lblStatus);
            this.Controls.Add(this.btnConnect);
            this.Controls.Add(this.cmbPort);
            this.Controls.Add(this.lblPort);
            this.Controls.Add(this.txtOperator);
            this.Controls.Add(this.lblOperator);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Dashboard Monitoring & Kontrol Hardware";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.trackPWM)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.numPWM)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.picStatus)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dgvLog)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem fileToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem bukaKonfigurasiToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem tampilkanLogToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem exitToolStripMenuItem;
        private System.Windows.Forms.Label lblOperator;
        private System.Windows.Forms.TextBox txtOperator;
        private System.Windows.Forms.Label lblPort;
        private System.Windows.Forms.ComboBox cmbPort;
        private System.Windows.Forms.Button btnConnect;
        private System.Windows.Forms.Label lblStatus;
        private System.Windows.Forms.ListBox lstRiwayatKoneksi;
        private System.Windows.Forms.Label lblJam;
        private System.Windows.Forms.Timer timerJam;
        private System.Windows.Forms.Label lblPWM;
        private System.Windows.Forms.TrackBar trackPWM;
        private System.Windows.Forms.NumericUpDown numPWM;
        private System.Windows.Forms.ProgressBar progressConnect;
        private System.Windows.Forms.Timer timerConnect;
        private System.Windows.Forms.RadioButton rbManual;
        private System.Windows.Forms.RadioButton rbOtomatis;
        private System.Windows.Forms.CheckBox chkPendingin;
        private System.Windows.Forms.PictureBox picStatus;
        private System.Windows.Forms.FlowLayoutPanel panelIndikator;
        private System.Windows.Forms.Label lblInfoPanel;
        private System.Windows.Forms.DataGridView dgvLog;
        private System.Windows.Forms.DateTimePicker dtpFilterTanggal;
        private System.Windows.Forms.Button btnResetFilter;
    }
}

