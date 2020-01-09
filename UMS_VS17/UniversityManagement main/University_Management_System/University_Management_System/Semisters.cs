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

    public partial class Semisters : Form
    {
        string sql;
        connection_query dim = new connection_query();
        
        public Semisters()
        {
            InitializeComponent();
        }


        public void GetDataDepart()
        {
            DataTable dt = dim.RetrieveData("select DepartId,DepartmentName from FacultyDeparts");
            comboDeprt.DataSource = dt;
            comboDeprt.DisplayMember = "DepartmentName";
            comboDeprt.ValueMember = "DepartId";
            comboDeprt.SelectedItem = null;
            comboDeprt.Text = "---Select Department Name---";


        }



        
        public void GetDataBatch()
        {
            int cardTypeId = 0;
            if (comboDeprt.SelectedIndex >= 0)
            {
                int.TryParse(comboDeprt.SelectedValue.ToString(), out cardTypeId);
            }

            DataTable dt = dim.RetrieveData("select BatchId,BatchName from Batches where DepartId='" + cardTypeId + "'");
            combobatch.DataSource = dt;
            combobatch.DisplayMember = "BatchName";
            combobatch.ValueMember = "BatchId";
           

        }


        public void InsertDataSemister()
        {



            sql = "Insert Into Semisters (SemisterName,DepartId,BatchId) values";
            sql += "('" + txtSemister.Text + "','" + comboDeprt.SelectedValue + "','" + combobatch.SelectedValue + "')";


            if (dim.ExecuteCommand(sql) > 0)
            {
                MessageBox.Show("Your Semister Data Has Been Inserted!");
                txtMsg.Clear();
                txtSemister.Clear();
                comboDeprt.SelectedIndex = -1;
                combobatch.SelectedIndex = -1;
            }

            else
            {

                MessageBox.Show("Error Found In Semister Form!");



            }
        }
        private void Semisters_Load(object sender, EventArgs e)
        {
            GetDataDepart();
        }

        private void comboDeparts_SelectedIndexChanged(object sender, EventArgs e)
        {
         
        }

        private void button1_Click(object sender, EventArgs e)
        {
           
        }

        private void comboDeprt_SelectedIndexChanged(object sender, EventArgs e)
        {
            GetDataBatch();
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            InsertDataSemister(); ;
        }

    }
}
