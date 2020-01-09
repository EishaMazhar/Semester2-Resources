using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data.SqlClient;
using System.Data;

namespace Uni
{
    class ClassUniversityManagementSysment
    {
    }


     public class connection_query
    {
         string connectionstring = @"Data Source=.;Initial Catalog=UniverData;Integrated Security=True";
         SqlConnection con;
        public connection_query() {
           con = new SqlConnection(connectionstring);
 }
        public int ExecuteCommand(string execute)
        {

            try
            {
                con.Open();
                SqlCommand cmd = new SqlCommand(execute, con);
                return cmd.ExecuteNonQuery();

            }
            finally
            {

                con.Close();
            }
        }
        public DataTable RetrieveData(string sql) {
            SqlCommand cmd = new SqlCommand();
            cmd.CommandText = sql;
            cmd.Connection = con;
            SqlDataAdapter sda = new SqlDataAdapter(cmd);
            DataTable dt = new DataTable();
            sda.Fill(dt);
            return dt;
        
        }

        internal DataTable RetrieveData(string p, SqlConnection con)
        {
            throw new NotImplementedException();
        }
    }
    }

