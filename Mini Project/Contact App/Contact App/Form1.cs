using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Contact_App
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            String FirstName = txtboxFirstName.Text;
            String LastName = txtboxLastName.Text;
            String ContactNumber = txtboxContactNumber.Text;
            String Address = txtboxAddress.Text;
            String Gender = cmbGender.Text;

            DataTable dt = new DataTable();
            dataGridView.DataSource = dt;

            if (FirstName == null || LastName == null || ContactNumber == null || Address == null || Gender == null)
            {
                MessageBox.Show("Semua data harus diisi");
                return;
            }
            dataGridView.Rows.Add(FirstName, LastName, ContactNumber, Address, Gender);
            MessageBox.Show("Data berhasil ditambahkan!");

            txtboxFirstName.Clear();
            txtboxLastName.Clear();
            txtboxContactNumber.Clear();
            txtboxAddress.Clear();
            cmbGender.SelectedIndex = -1;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            dataGridView.Columns.Add("FirstName", "First Name");
            dataGridView.Columns.Add("LastName", "Last Name");
            dataGridView.Columns.Add("ContactNumber", "Contact Number");
            dataGridView.Columns.Add("Address", "Address");
            dataGridView.Columns.Add("Gender", "Gender");
            cmbGender.Items.Add("Male");
            cmbGender.Items.Add("Female");
        }
    }
}
