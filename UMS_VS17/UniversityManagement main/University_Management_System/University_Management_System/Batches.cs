using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;
using Uni;
namespace University_Management_System
{
    public partial class Batches : Form
    {
        string sql="";
        connection_query dim = new connection_query();
        public Batches()
        {
            InitializeComponent();
        }
        public void GetDataDepartmentBatch()
        {

            DataTable dt = dim.RetrieveData("select DepartId,DepartmentName from FacultyDeparts");
            comboDeparts.DataSource = dt;
            comboDeparts.DisplayMember = "DepartmentName";
            comboDeparts.ValueMember = "DepartId";
            
            comboDeparts.Text = "---Select Department Name---";


        }




        public void InsertDataBatches()
        {

            

            sql = "Insert Into Batches (BatchName,DepartId) values";
            sql += "('" + txtBatches.Text + "','" + comboDeparts.SelectedValue + "')";
            

            if (dim.ExecuteCommand(sql) > 0)
            {
                MessageBox.Show("Your Batches Data Has Been Inserted!");
               
                txtBatches.Clear();
                comboDeparts.SelectedIndex = -1;
            }

            else
            {

                MessageBox.Show("Error Found In Batches Form!");



            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            InsertDataBatches();
        }

        private void Batches_Load(object sender, EventArgs e)
        {
            GetDataDepartmentBatch();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void comboDeparts_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void txtMsg_TextChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void txtBatches_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
