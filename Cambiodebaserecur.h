#pragma once

namespace LAB3JULIORUIZ1284719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de Cambiodebaserecur
	/// </summary>
	public ref class Cambiodebaserecur : public System::Windows::Forms::Form
	{
	public:
		Cambiodebaserecur(void)
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
		~Cambiodebaserecur()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtbas;
	protected:
	private: System::Windows::Forms::Label^ lbltime;
	private: System::Windows::Forms::Button^ btnobtiene;
	private: System::Windows::Forms::Label^ lblbase;
	private: System::Windows::Forms::Label^ lblnum;
	private: System::Windows::Forms::LinkLabel^ lblresultados;
	private: System::Windows::Forms::TextBox^ txtnum;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TXBBASDEST;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Cambiodebaserecur::typeid));
			this->txtbas = (gcnew System::Windows::Forms::TextBox());
			this->lbltime = (gcnew System::Windows::Forms::Label());
			this->btnobtiene = (gcnew System::Windows::Forms::Button());
			this->lblbase = (gcnew System::Windows::Forms::Label());
			this->lblnum = (gcnew System::Windows::Forms::Label());
			this->lblresultados = (gcnew System::Windows::Forms::LinkLabel());
			this->txtnum = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TXBBASDEST = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txtbas
			// 
			this->txtbas->Location = System::Drawing::Point(47, 138);
			this->txtbas->Margin = System::Windows::Forms::Padding(2);
			this->txtbas->Name = L"txtbas";
			this->txtbas->Size = System::Drawing::Size(114, 20);
			this->txtbas->TabIndex = 29;
			// 
			// lbltime
			// 
			this->lbltime->AutoSize = true;
			this->lbltime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltime->Location = System::Drawing::Point(271, 227);
			this->lbltime->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbltime->Name = L"lbltime";
			this->lbltime->Size = System::Drawing::Size(50, 18);
			this->lbltime->TabIndex = 28;
			this->lbltime->Text = L"lbltime";
			// 
			// btnobtiene
			// 
			this->btnobtiene->BackColor = System::Drawing::Color::DarkOrange;
			this->btnobtiene->Location = System::Drawing::Point(237, 64);
			this->btnobtiene->Margin = System::Windows::Forms::Padding(2);
			this->btnobtiene->Name = L"btnobtiene";
			this->btnobtiene->Size = System::Drawing::Size(84, 44);
			this->btnobtiene->TabIndex = 27;
			this->btnobtiene->Text = L"CONVERTIR";
			this->btnobtiene->UseVisualStyleBackColor = false;
			this->btnobtiene->Click += gcnew System::EventHandler(this, &Cambiodebaserecur::btnobtiene_Click);
			// 
			// lblbase
			// 
			this->lblbase->AutoSize = true;
			this->lblbase->Location = System::Drawing::Point(60, 123);
			this->lblbase->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblbase->Name = L"lblbase";
			this->lblbase->Size = System::Drawing::Size(80, 13);
			this->lblbase->TabIndex = 26;
			this->lblbase->Text = L"BASE ACTUAL";
			// 
			// lblnum
			// 
			this->lblnum->AutoSize = true;
			this->lblnum->Location = System::Drawing::Point(44, 49);
			this->lblnum->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblnum->Name = L"lblnum";
			this->lblnum->Size = System::Drawing::Size(125, 13);
			this->lblnum->TabIndex = 25;
			this->lblnum->Text = L"INGRESE UN NUMERO";
			// 
			// lblresultados
			// 
			this->lblresultados->ActiveLinkColor = System::Drawing::Color::Teal;
			this->lblresultados->AutoSize = true;
			this->lblresultados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblresultados->LinkColor = System::Drawing::SystemColors::ControlText;
			this->lblresultados->Location = System::Drawing::Point(241, 148);
			this->lblresultados->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblresultados->Name = L"lblresultados";
			this->lblresultados->Size = System::Drawing::Size(80, 20);
			this->lblresultados->TabIndex = 24;
			this->lblresultados->TabStop = true;
			this->lblresultados->Text = L"linkLabel1";
			// 
			// txtnum
			// 
			this->txtnum->Location = System::Drawing::Point(47, 64);
			this->txtnum->Margin = System::Windows::Forms::Padding(2);
			this->txtnum->Name = L"txtnum";
			this->txtnum->Size = System::Drawing::Size(114, 20);
			this->txtnum->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(400, 25);
			this->label1->TabIndex = 22;
			this->label1->Text = L"CONVERSION DE BASE m A BASE n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 192);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"BASE DESTINO";
			// 
			// TXBBASDEST
			// 
			this->TXBBASDEST->Location = System::Drawing::Point(47, 207);
			this->TXBBASDEST->Margin = System::Windows::Forms::Padding(2);
			this->TXBBASDEST->Name = L"TXBBASDEST";
			this->TXBBASDEST->Size = System::Drawing::Size(114, 20);
			this->TXBBASDEST->TabIndex = 31;
			// 
			// Cambiodebaserecur
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(434, 303);
			this->Controls->Add(this->TXBBASDEST);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtbas);
			this->Controls->Add(this->lbltime);
			this->Controls->Add(this->btnobtiene);
			this->Controls->Add(this->lblbase);
			this->Controls->Add(this->lblnum);
			this->Controls->Add(this->lblresultados);
			this->Controls->Add(this->txtnum);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"Cambiodebaserecur";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CAMBIO DE BASE RECURSIVO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//funciona pero no se hasta que numero deja de funcionar ya no probe todos los casos :(
		String^ CambiarBase(int num, int basedestino) {
			int currentNum = num % basedestino;
			String^ letters = "ABCDEF";
			String^ let = "";
			if (currentNum >= 10) {
				currentNum -= 10;
				let = letters[currentNum].ToString();
			}
			else {
				let = currentNum.ToString();
			}
			int newNum = num / basedestino;
			if (num < basedestino) {
				return Convert::ToString(let);
			}
			return (CambiarBase(newNum, basedestino) + let);
		}
		//como cuesta hacer un string aqui >;v
		int ConvertDecimal(String^ num1, int num, int num2, int baseactual) {
			//num1->Split();
			char currentChar;
			int currentValue;
			for (int i = 0; i < num1->Length; i++)
			{
				//if (num1[i] != ".")
				currentChar = num1[i];
				if (currentChar >= 'A') {
					currentValue = currentChar - 'A' + 10;
				}
				else {
					currentValue = currentChar - '0';
				}

				num2 = Convert::ToInt32(currentValue);
				num += num2 * Potencia(baseactual, num1->Length - 1 - i);
			}

			return num;
		}


		int Potencia(int num, int pot) {
			if (pot == 1) {
				return num;
			}
			else if (pot == 0) {
				return 1;
			}
			else {
				return num * Potencia(num, pot - 1);
			}
		}
	private: System::Void btnobtiene_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			Stopwatch^ watch = gcnew Stopwatch();
			//Stopwatch^ watch = Stopwatch::StarNew();
			watch->Start();

			String^ numconversion = Convert::ToString(txtnum->Text);
			int baseactual = Convert::ToInt32(txtbas->Text);
			int basedestino = Convert::ToInt32(TXBBASDEST->Text);

			int num1 = ConvertDecimal(numconversion, 0, 0, baseactual);

			if (basedestino == 10) {
				lblresultados->Text = Convert::ToString(num1);
			}
			else {
				lblresultados->Text = CambiarBase(num1, basedestino);
			}
			watch->Stop();

			MessageBox::Show("OPERACION REALIZADA EXITOSAMENTE", "OPERACION CAMBIO DE BASE M A N", MessageBoxButtons::OK, MessageBoxIcon::Information);
			for (int i = 0; i < 10000; i++)//segun la internet tenia que llevar un for para funcionar el stopwatch
			{
				Console::Write(i);
			}

			lbltime->Text = watch->ElapsedMilliseconds + " ms";

		}
		catch (Exception^ e)
		{
			MessageBox::Show("ERROR DETECTADO" + e->Message, "OPERACION CAMBIO DE BASE M A N", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
		
	}
};
}
