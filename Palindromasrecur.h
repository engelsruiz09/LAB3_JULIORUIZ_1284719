#pragma once

namespace LAB3JULIORUIZ1284719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;


	/// <summary>
	/// Resumen de Palindromasrecur
	/// </summary>
	public ref class Palindromasrecur : public System::Windows::Forms::Form
	{
	public:
		Palindromasrecur(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Palindromasrecur()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ lblnopali;
	protected:
	private: System::Windows::Forms::Label^ lbltime;
	private: System::Windows::Forms::LinkLabel^ llbresultados;
	private: System::Windows::Forms::Button^ btncalcular;
	private: System::Windows::Forms::TextBox^ txtpath;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnimportar;
	private: System::Windows::Forms::OpenFileDialog^ ofdimportar1;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Palindromasrecur::typeid));
			this->lblnopali = (gcnew System::Windows::Forms::LinkLabel());
			this->lbltime = (gcnew System::Windows::Forms::Label());
			this->llbresultados = (gcnew System::Windows::Forms::LinkLabel());
			this->btncalcular = (gcnew System::Windows::Forms::Button());
			this->txtpath = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnimportar = (gcnew System::Windows::Forms::Button());
			this->ofdimportar1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblnopali
			// 
			this->lblnopali->AutoSize = true;
			this->lblnopali->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnopali->Location = System::Drawing::Point(53, 431);
			this->lblnopali->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblnopali->Name = L"lblnopali";
			this->lblnopali->Size = System::Drawing::Size(90, 20);
			this->lblnopali->TabIndex = 16;
			this->lblnopali->TabStop = true;
			this->lblnopali->Text = L"linkLabel1";
			// 
			// lbltime
			// 
			this->lbltime->AutoSize = true;
			this->lbltime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltime->Location = System::Drawing::Point(27, 481);
			this->lbltime->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbltime->Name = L"lbltime";
			this->lbltime->Size = System::Drawing::Size(51, 15);
			this->lbltime->TabIndex = 15;
			this->lbltime->Text = L"lbltime";
			// 
			// llbresultados
			// 
			this->llbresultados->AutoSize = true;
			this->llbresultados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llbresultados->Location = System::Drawing::Point(53, 382);
			this->llbresultados->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->llbresultados->Name = L"llbresultados";
			this->llbresultados->Size = System::Drawing::Size(90, 20);
			this->llbresultados->TabIndex = 14;
			this->llbresultados->TabStop = true;
			this->llbresultados->Text = L"linkLabel1";
			// 
			// btncalcular
			// 
			this->btncalcular->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btncalcular->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncalcular->Location = System::Drawing::Point(165, 342);
			this->btncalcular->Margin = System::Windows::Forms::Padding(2);
			this->btncalcular->Name = L"btncalcular";
			this->btncalcular->Size = System::Drawing::Size(141, 28);
			this->btncalcular->TabIndex = 13;
			this->btncalcular->Text = L"Calcular";
			this->btncalcular->UseVisualStyleBackColor = false;
			this->btncalcular->Click += gcnew System::EventHandler(this, &Palindromasrecur::btncalcular_Click);
			// 
			// txtpath
			// 
			this->txtpath->BackColor = System::Drawing::SystemColors::GrayText;
			this->txtpath->Location = System::Drawing::Point(179, 82);
			this->txtpath->Name = L"txtpath";
			this->txtpath->ReadOnly = true;
			this->txtpath->Size = System::Drawing::Size(274, 20);
			this->txtpath->TabIndex = 12;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(11, 140);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(484, 186);
			this->dataGridView1->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(159, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 33);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Palindromas";
			// 
			// btnimportar
			// 
			this->btnimportar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnimportar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnimportar->Location = System::Drawing::Point(58, 61);
			this->btnimportar->Margin = System::Windows::Forms::Padding(2);
			this->btnimportar->Name = L"btnimportar";
			this->btnimportar->Size = System::Drawing::Size(108, 60);
			this->btnimportar->TabIndex = 9;
			this->btnimportar->Text = L"Importar";
			this->btnimportar->UseVisualStyleBackColor = false;
			this->btnimportar->Click += gcnew System::EventHandler(this, &Palindromasrecur::btnimportar_Click);
			// 
			// ofdimportar1
			// 
			this->ofdimportar1->FileName = L"openFileDialog1";
			// 
			// Palindromasrecur
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(506, 517);
			this->Controls->Add(this->lblnopali);
			this->Controls->Add(this->lbltime);
			this->Controls->Add(this->llbresultados);
			this->Controls->Add(this->btncalcular);
			this->Controls->Add(this->txtpath);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnimportar);
			this->Name = L"Palindromasrecur";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PALINDROMO RECURSIVO";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int tr = 0;
		int fa = 0;
		public : bool Palindromo(String^ palabra, int pos) {
			if (palabra[pos] == palabra[palabra->Length - (pos + 1)])
			{
				if (pos > palabra->Length / 2) {
					return true;
				}
				else {
					return (true && Palindromo(palabra, pos + 1));
				}
			}
			else {
				return false;
			}
		}

		//SOLO ESTAS LINEAS 225 A 265 CODIGO FULL SACADO DE INTERNET XD TODO RARO PARA QUE LEA UN CSV EN UN DATA GRID CREO QUE ME COMPLIQUE MUCHO :Lhttps://docs.microsoft.com/en-us/cpp/dotnet/file-handling-and-i-o-cpp-cli?view=msvc-160
	private: System::Void btnimportar_Click(System::Object^ sender, System::EventArgs^ e) {
		ofdimportar1->Filter = "Archivos separados por coma (csv) | *.csv";
		ofdimportar1->FileName = "";  // agrega los filtro openfiledialog

		if (ofdimportar1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			txtpath->Text = ofdimportar1->FileName;
			array<String^>^ archivolineas = File::ReadAllLines(ofdimportar1->FileName);//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto

			array<String^>^ archivoColumna = archivolineas[0]->Split(',');
			if (archivolineas->Length > 0)
			{

				int canticolums = archivoColumna->Length;



				//Agrega las columnas
				for (int i = 0; i < canticolums; i++) {
					//Crea una columna
					DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
					nuevacolumna->Width = 60;//tamaño cuadricula
					// tipo de columna que será
					DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					nuevacolumna->CellTemplate = cellTemplate;
					//Inserta la columna
					dataGridView1->Columns->Add(nuevacolumna);
				}
				//Agrega  filas de manera dinámica
				for (int i = 0; i < archivolineas->Length; i++) {
					dataGridView1->Rows->Add();
				}
				//Llena el DatagridView
				for (int i = 0; i < archivolineas->Length; i++) {
					array<String^>^ fila = archivolineas[i]->Split(',');
					int j = 0;

					//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
					while ((j < canticolums) && (j < fila->Length)) {
						dataGridView1->Rows[i]->Cells[j]->Value = fila[j];
						j++;
					}
				}

			}
		}
		else
		{
			MessageBox::Show("No se exportó el archivo", "Archivo No seleccionado", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
private: System::Void btncalcular_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ palabra = "";
	int pos;
	Stopwatch^ watch = gcnew Stopwatch();

	watch->Start();


	for (int x = 0; x < dataGridView1->Rows->Count; x++)
	{
		for (int y = 0; y < dataGridView1->Rows[x]->Cells->Count; y++)
		{

			if (dataGridView1->Rows[x]->Cells[y]->Value)
			{
				 palabra = dataGridView1->Rows[x]->Cells[y]->Value->ToString();

				if (Palindromo(palabra,pos) == true)// para crear nuestro contador 
				{
					tr++; // mi contador para palabras palindromas
				}
				if (Palindromo(palabra, pos) == false)// para las no palindromas 
				{
					fa++;//mi contador para palabras no palindromas
				}
			}
		}
	}
	

	llbresultados->Text = "" + ("Se encontraron " + tr + "" + "palabras palindromas");// se llaman los contadores
	lblnopali->Text = "" + ("Se encontraron " + fa + " no palabras palindromas");
	MessageBox::Show("OPERACION REALIZADA EXITOSAMENTE", "OPERACION PALINDROMA", MessageBoxButtons::OK, MessageBoxIcon::Information);
	for (int i = 0; i < 1000; i++)
	{
		Console::Write(i);
	}
	watch->Stop();
	lbltime->Text = watch->ElapsedMilliseconds + " ms";
}
};
}
