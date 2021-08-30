#pragma once

namespace LAB3JULIORUIZ1284719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;//esta cosa como costo encontrar para encontrar el stopwatch >:v

	/// <summary>
	/// Resumen de multirecursivo
	/// </summary>
	public ref class multirecursivo : public System::Windows::Forms::Form
	{
	public:
		multirecursivo(void)
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
		~multirecursivo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbltiempo;
	protected:
	private: System::Windows::Forms::LinkLabel^ llbresultado;
	private: System::Windows::Forms::Button^ btncalcular;
	private: System::Windows::Forms::TextBox^ txtvalor2;
	private: System::Windows::Forms::TextBox^ txtvalor1;
	private: System::Windows::Forms::Label^ lblvalor2;
	private: System::Windows::Forms::Label^ lblvalor1;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(multirecursivo::typeid));
			this->lbltiempo = (gcnew System::Windows::Forms::Label());
			this->llbresultado = (gcnew System::Windows::Forms::LinkLabel());
			this->btncalcular = (gcnew System::Windows::Forms::Button());
			this->txtvalor2 = (gcnew System::Windows::Forms::TextBox());
			this->txtvalor1 = (gcnew System::Windows::Forms::TextBox());
			this->lblvalor2 = (gcnew System::Windows::Forms::Label());
			this->lblvalor1 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbltiempo
			// 
			this->lbltiempo->AutoSize = true;
			this->lbltiempo->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->lbltiempo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltiempo->Location = System::Drawing::Point(31, 233);
			this->lbltiempo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbltiempo->Name = L"lbltiempo";
			this->lbltiempo->Size = System::Drawing::Size(63, 16);
			this->lbltiempo->TabIndex = 19;
			this->lbltiempo->Text = L"lbltiempo";
			// 
			// llbresultado
			// 
			this->llbresultado->ActiveLinkColor = System::Drawing::Color::Blue;
			this->llbresultado->AutoSize = true;
			this->llbresultado->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->llbresultado->DisabledLinkColor = System::Drawing::Color::Blue;
			this->llbresultado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llbresultado->LinkColor = System::Drawing::Color::Blue;
			this->llbresultado->Location = System::Drawing::Point(257, 124);
			this->llbresultado->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->llbresultado->Name = L"llbresultado";
			this->llbresultado->Size = System::Drawing::Size(90, 20);
			this->llbresultado->TabIndex = 18;
			this->llbresultado->TabStop = true;
			this->llbresultado->Text = L"linkLabel1";
			// 
			// btncalcular
			// 
			this->btncalcular->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btncalcular->Location = System::Drawing::Point(73, 158);
			this->btncalcular->Margin = System::Windows::Forms::Padding(2);
			this->btncalcular->Name = L"btncalcular";
			this->btncalcular->Size = System::Drawing::Size(208, 57);
			this->btncalcular->TabIndex = 17;
			this->btncalcular->Text = L"CALCULAR";
			this->btncalcular->UseVisualStyleBackColor = false;
			this->btncalcular->Click += gcnew System::EventHandler(this, &multirecursivo::btncalcular_Click);
			// 
			// txtvalor2
			// 
			this->txtvalor2->Location = System::Drawing::Point(134, 74);
			this->txtvalor2->Margin = System::Windows::Forms::Padding(2);
			this->txtvalor2->Name = L"txtvalor2";
			this->txtvalor2->Size = System::Drawing::Size(105, 20);
			this->txtvalor2->TabIndex = 16;
			// 
			// txtvalor1
			// 
			this->txtvalor1->Location = System::Drawing::Point(134, 32);
			this->txtvalor1->Margin = System::Windows::Forms::Padding(2);
			this->txtvalor1->Name = L"txtvalor1";
			this->txtvalor1->Size = System::Drawing::Size(105, 20);
			this->txtvalor1->TabIndex = 15;
			// 
			// lblvalor2
			// 
			this->lblvalor2->AutoSize = true;
			this->lblvalor2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->lblvalor2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblvalor2->Location = System::Drawing::Point(45, 77);
			this->lblvalor2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblvalor2->Name = L"lblvalor2";
			this->lblvalor2->Size = System::Drawing::Size(74, 17);
			this->lblvalor2->TabIndex = 14;
			this->lblvalor2->Text = L"VALOR 2";
			// 
			// lblvalor1
			// 
			this->lblvalor1->AutoSize = true;
			this->lblvalor1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->lblvalor1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblvalor1->Location = System::Drawing::Point(45, 32);
			this->lblvalor1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblvalor1->Name = L"lblvalor1";
			this->lblvalor1->Size = System::Drawing::Size(74, 17);
			this->lblvalor1->TabIndex = 13;
			this->lblvalor1->Text = L"VALOR 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(113, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 18);
			this->label1->TabIndex = 20;
			this->label1->Text = L"RESPUESTA =";
			// 
			// multirecursivo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(358, 276);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbltiempo);
			this->Controls->Add(this->llbresultado);
			this->Controls->Add(this->btncalcular);
			this->Controls->Add(this->txtvalor2);
			this->Controls->Add(this->txtvalor1);
			this->Controls->Add(this->lblvalor2);
			this->Controls->Add(this->lblvalor1);
			this->DoubleBuffered = true;
			this->Name = L"multirecursivo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MULTIPLICACIÓN RECURSIVO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//dejolinkdelstopwatchhttps://docs.microsoft.com/en-us/dotnet/api/system.diagnostics.stopwatch.startnew?redirectedfrom=MSDN&view=net-5.0#System_Diagnostics_Stopwatch_StartNew
		int multisuma(int valor1, int valor2)
		{

			if (valor2 == 1)  //el caso base que si el segundo numero es 1 que devuelva el primer valor 
			{
				return valor1;
			}

			if (valor2 > 0)
			{

				return valor1 + multisuma(valor1, valor2 - 1);// sino que haga lo recursivo
			}
			else
			{
				return -valor1 + multisuma(valor1, valor2 + 1); // sino que haga lo recursivo se maneja una excepcion para numeros negativos 
			}



		}
	private: System::Void btncalcular_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			Stopwatch^ watch = gcnew System::Diagnostics::Stopwatch();
			//Stopwatch^ watch = Stopwatch::StarNew();
			watch->Start();

			llbresultado->Text = "" + multisuma(Convert::ToInt32(txtvalor1->Text), Convert::ToInt32(txtvalor2->Text));
			watch->Stop();

			MessageBox::Show("OPERACION REALIZADA EXITOSAMENTE", "OPERACION MULTISUMA", MessageBoxButtons::OK, MessageBoxIcon::Information);

			for (int i = 0; i < 10000; i++)
			{
				Console::Write(i);
			}

			lbltiempo->Text = watch->ElapsedMilliseconds + " ms";
		}
		catch (Exception^ e)
		{
			MessageBox::Show("ERROR DETECTADO" + e->Message, "OPERACION SUMA", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
