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
    public partial class Deparments : Form
    {

        string sql = "";

        connection_query dim = new connection_query();
        public Deparments()
        {
            InitializeComponent();
        }





        public void DataInsertDepartments()
        {





            sql = "Insert into FacultyDeparts(DepartmentName,Message) values";

            sql += "('" + txtDepartment.Text + "','"+txtMsg.Text+"')";


            if (dim.ExecuteCommand(sql) > 0)
            {
                MessageBox.Show("Your Department Data Has Been Inserted!");

                txtMsg.Clear();
                txtDepartment.Clear();

            }
        }


        private void button1_Click(object sender, EventArgs e)
        {
            DataInsertDepartments();
        }

        private void txtDepartment_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
