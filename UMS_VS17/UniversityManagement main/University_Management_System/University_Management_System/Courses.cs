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
    public partial class Courses : Form
    {
        string sql = "";
        connection_query dim = new connection_query();
        public Courses()
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




        public void GetDataSemister()
        {
            int cardTypeId = 0;
            if (combobatch.SelectedIndex >= 0)
            {
                int.TryParse(combobatch.SelectedValue.ToString(), out cardTypeId);
            }

            DataTable dt = dim.RetrieveData("select SemisterId,SemisterName from Semisters where BatchId='" + cardTypeId + "'");
            comboSmister.DataSource = dt;
            comboSmister.DisplayMember = "SemisterName";
            comboSmister.ValueMember = "SemisterId";


        }


        public void InsertCourse(){
         sql = "Insert Into Courses (CoursesName,Message,DepartId,BatchId,SemisterId) values";
            sql += "('" + txtCourses.Text + "','"+txtMsg.Text+"''" + comboDeprt.SelectedValue + "','" + combobatch.SelectedValue + "','"+comboSmister.SelectedValue+"')";


            if (dim.ExecuteCommand(sql) > 0)
            {
                MessageBox.Show("Your Semister Data Has Been Inserted!");
                txtMsg.Clear();
                txtCourses.Clear();
                comboDeprt.SelectedIndex = -1;
                combobatch.SelectedIndex = -1;
                comboSmister.SelectedValue = -1;
            }

            else
            {

                MessageBox.Show("Error Found In Semister Form!");

            }

            }



        private void Courses_Load(object sender, EventArgs e)
        {
            GetDataDepart();
        }

        private void comboDeprt_SelectedIndexChanged(object sender, EventArgs e)
        {
          
        }

        private void combobatch_SelectedIndexChanged(object sender, EventArgs e)
        {
           
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
        }

        private void comboDeprt_SelectedIndexChanged_1(object sender, EventArgs e)
        {
            GetDataBatch();
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            InsertCourse();
        }

        private void combobatch_SelectedIndexChanged_1(object sender, EventArgs e)
        {
            GetDataSemister();
        }
    }
}
