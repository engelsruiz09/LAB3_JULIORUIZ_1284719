#pragma once
#include <math.h>



namespace LAB3JULIORUIZ1284719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	
	/// <summary>
	/// Resumen de cambiodebaseiterativo
	/// </summary>
	public ref class cambiodebaseiterativo : public System::Windows::Forms::Form
	{
	public:
		cambiodebaseiterativo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~cambiodebaseiterativo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TXBBASDEST;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtbas;
	private: System::Windows::Forms::Label^ lbltimes;
	private: System::Windows::Forms::Button^ btnobtiene;
	private: System::Windows::Forms::Label^ lblbase;
	private: System::Windows::Forms::LinkLabel^ lblresultados;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblnum;
	private: System::Windows::Forms::TextBox^ txtnum;

	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(cambiodebaseiterativo::typeid));
			this->TXBBASDEST = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtbas = (gcnew System::Windows::Forms::TextBox());
			this->lbltimes = (gcnew System::Windows::Forms::Label());
			this->btnobtiene = (gcnew System::Windows::Forms::Button());
			this->lblbase = (gcnew System::Windows::Forms::Label());
			this->lblresultados = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblnum = (gcnew System::Windows::Forms::Label());
			this->txtnum = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// TXBBASDEST
			// 
			this->TXBBASDEST->Location = System::Drawing::Point(52, 220);
			this->TXBBASDEST->Margin = System::Windows::Forms::Padding(2);
			this->TXBBASDEST->Name = L"TXBBASDEST";
			this->TXBBASDEST->Size = System::Drawing::Size(114, 20);
			this->TXBBASDEST->TabIndex = 41;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(65, 195);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 40;
			this->label2->Text = L"BASE DESTINO";
			// 
			// txtbas
			// 
			this->txtbas->Location = System::Drawing::Point(52, 154);
			this->txtbas->Margin = System::Windows::Forms::Padding(2);
			this->txtbas->Name = L"txtbas";
			this->txtbas->Size = System::Drawing::Size(114, 20);
			this->txtbas->TabIndex = 39;
			// 
			// lbltimes
			// 
			this->lbltimes->AutoSize = true;
			this->lbltimes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltimes->Location = System::Drawing::Point(276, 244);
			this->lbltimes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbltimes->Name = L"lbltimes";
			this->lbltimes->Size = System::Drawing::Size(50, 18);
			this->lbltimes->TabIndex = 38;
			this->lbltimes->Text = L"lbltime";
			// 
			// btnobtiene
			// 
			this->btnobtiene->BackColor = System::Drawing::Color::DarkOrange;
			this->btnobtiene->Location = System::Drawing::Point(242, 81);
			this->btnobtiene->Margin = System::Windows::Forms::Padding(2);
			this->btnobtiene->Name = L"btnobtiene";
			this->btnobtiene->Size = System::Drawing::Size(84, 44);
			this->btnobtiene->TabIndex = 37;
			this->btnobtiene->Text = L"CONVERTIR";
			this->btnobtiene->UseVisualStyleBackColor = false;
			this->btnobtiene->Click += gcnew System::EventHandler(this, &cambiodebaseiterativo::btnobtiene_Click);
			// 
			// lblbase
			// 
			this->lblbase->AutoSize = true;
			this->lblbase->Location = System::Drawing::Point(65, 129);
			this->lblbase->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblbase->Name = L"lblbase";
			this->lblbase->Size = System::Drawing::Size(80, 13);
			this->lblbase->TabIndex = 36;
			this->lblbase->Text = L"BASE ACTUAL";
			// 
			// lblresultados
			// 
			this->lblresultados->ActiveLinkColor = System::Drawing::Color::Teal;
			this->lblresultados->AutoSize = true;
			this->lblresultados->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblresultados->LinkColor = System::Drawing::SystemColors::ControlText;
			this->lblresultados->Location = System::Drawing::Point(246, 165);
			this->lblresultados->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblresultados->Name = L"lblresultados";
			this->lblresultados->Size = System::Drawing::Size(80, 20);
			this->lblresultados->TabIndex = 34;
			this->lblresultados->TabStop = true;
			this->lblresultados->Text = L"linkLabel1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 26);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(400, 25);
			this->label1->TabIndex = 32;
			this->label1->Text = L"CONVERSION DE BASE m A BASE n";
			// 
			// lblnum
			// 
			this->lblnum->AutoSize = true;
			this->lblnum->Location = System::Drawing::Point(49, 69);
			this->lblnum->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblnum->Name = L"lblnum";
			this->lblnum->Size = System::Drawing::Size(125, 13);
			this->lblnum->TabIndex = 43;
			this->lblnum->Text = L"INGRESE UN NUMERO";
			// 
			// txtnum
			// 
			this->txtnum->Location = System::Drawing::Point(52, 84);
			this->txtnum->Margin = System::Windows::Forms::Padding(2);
			this->txtnum->Name = L"txtnum";
			this->txtnum->Size = System::Drawing::Size(114, 20);
			this->txtnum->TabIndex = 42;
			// 
			// cambiodebaseiterativo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(452, 273);
			this->Controls->Add(this->lblnum);
			this->Controls->Add(this->txtnum);
			this->Controls->Add(this->TXBBASDEST);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtbas);
			this->Controls->Add(this->lbltimes);
			this->Controls->Add(this->btnobtiene);
			this->Controls->Add(this->lblbase);
			this->Controls->Add(this->lblresultados);
			this->Controls->Add(this->label1);
			this->Name = L"cambiodebaseiterativo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CAMBIO DE BASE ITERATIVO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ Conver_base(int final, int n, int residuo) {
			if (n==0)
			{
				residuo = 0;
				return "";
			}
			else
			{
				residuo = n % final;
				n = n / final;
				if (residuo==10)
				{
					return Conver_base(final, n, residuo) + "A";
				}
				else if (residuo == 11)
				{
					return Conver_base(final, n, residuo) + "B";
				}
				else if (residuo == 12)
				{
					return Conver_base(final, n, residuo) + "C";
				}
				else if (residuo == 13)
				{
					return Conver_base(final, n, residuo) + "D";
				}
				else if (residuo == 14 )
				{
					return Conver_base(final, n, residuo) + "E";
				}
				else if (residuo == 15)
				{
					return Conver_base(final, n, residuo) + "F";
				}
				else
				{
					return Conver_base(final, n, residuo) + Convert::ToString(residuo);
				}
			}
		}

		String^ Conver_bases2(int original, int final, String^ n) {
			int respuesta = 0;
			int residuo = 0;
			int elevar = 1;
			if (original == 2)
			{
				bool u = false;
				for (int i = 0; i < n->Length; i++)
				{
					String^ w = n->Substring(i, 1);
					if (w == "1"||n->Substring(i,1)=="0")
					{

					}
					else
					{
						return "error";
					}
				}
			}

			if (original == 10)
			{
				return Conver_base(final, Convert::ToInt32(n), residuo);
			}
			else
			{
				int j = 0;
				int f = n->Length - 1;
				for (int i = n->Length; i > 0; i--)
				{
					if (n->Substring(f, 1) == "A")
					{
						respuesta = respuesta + (10 * (pow(original, j)));

					}
					else if (n->Substring(f, 1) == "B")
					{
						respuesta = respuesta + (11 * (pow(original, j)));

					}
					else if (n->Substring(f, 1) == "C")
					{
						respuesta = respuesta + (12 * (pow(original, j)));

					}
					else if (n->Substring(f, 1) == "D")
					{
						respuesta = respuesta + (13 * (pow(original, j)));
					}
					else if (n->Substring(f, 1) == "E")
					{
						respuesta = respuesta + (14 * (pow(original, j)));
					}
					else if (n->Substring(f, 1) == "F")
					{
						respuesta = respuesta + (15 * (pow(original, j)));
					}
					else
					{
						respuesta = respuesta + (Convert::ToInt32(n->Substring(f, 1)) * (pow(original, j)));
					}
					j++;
					f--;

				}
				return Conver_base(final, respuesta, residuo);
			}

		}



		//int potencia(int num, int pot) {
		//	int result = num;
		//	while (pot > 1)
		//	{
		//		result = result * num;
		//		pot--;
		//	}
		//	return result;
		//}
		//String^ CambiarBase(int num, int basedestino) {
		//	int currentNum = num % basedestino;
		//	String^ letters = "ABCDEF";
		//	String^ let = "";
		//	if (currentNum >= 10) {
		//		currentNum -= 10;
		//		let = letters[currentNum].ToString();
		//	}
		//	else {
		//		let = currentNum.ToString();
		//	}
		//	int newNum = num / basedestino;
		//	if (num < basedestino) {
		//		return Convert::ToString(let);
		//	}
		//	return (CambiarBase(newNum, basedestino) + let);
		//}
		////como cuesta hacer un string aqui >;v
		//int ConvertDecimal(String^ num1, int num, int num2, int baseactual) {
		//	//num1->Split();
		//	char currentChar;
		//	int currentValue;
		//	for (int i = 0; i < num1->Length; i++)
		//	{
		//		//if (num1[i] != ".")
		//		currentChar = num1[i];
		//		if (currentChar >= 'A') {
		//			currentValue = currentChar - 'A' + 10;
		//		}
		//		else {
		//			currentValue = currentChar - '0';
		//		}

		//		num2 = Convert::ToInt32(currentValue);
		//		num += num2 * potencia(baseactual, num1->Length - 1 - i);
		//	}

		//	return num;
		//}
		////solo para algunas bases funciona ya no me dio tiempo para las demas :(((
		//int OToDecimalI(String^ numero, int base)
		//{
		//	int expo = 0;
		//	int resultado = 0;
		//	for (int i = numero->Length - 1; i >= 0; i--)
		//	{
		//		resultado = resultado + Convert::ToInt32(numero->Substring(i, 1)) * Math::Pow(base, expo);
		//		expo++;
		//	}
		//	return resultado;
		//}
	 //   


		//String^ DToDestinoI(int numero, int base)
		//{
		//	int div = 0;
		//	int residuo = 0;
		//	String^ resultado = "";

		//	div = numero;
		//	do
		//	{
		//		residuo = div % base;
		//		resultado = Convert::ToString(residuo) + resultado;
		//		div = div / base;
		//	} while (div > base);

		//	if (div != 0)
		//	{
		//		resultado = Convert::ToString(div) + resultado;
		//	}

		//	return resultado;
		//}

	private: System::Void btnobtiene_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			Stopwatch^ watch = gcnew Stopwatch();
			//Stopwatch^ watch = Stopwatch::StarNew();
			watch->Start();

			int num1 = Convert::ToInt32(txtbas->Text);
			lblresultados->Text = "" + Conver_bases2(Convert::ToInt32(txtbas->Text), Convert::ToInt32(TXBBASDEST->Text), Convert::ToString(txtnum->Text));

			watch->Stop();
			MessageBox::Show("OPERACION REALIZADA EXITOSAMENTE", "OPERACION CAMBIO DE BASE M A N", MessageBoxButtons::OK, MessageBoxIcon::Information);
			for (int i = 0; i < 10000; i++)//segun la internet tenia que llevar un for para funcionar el stopwatch
			{
				Console::Write(i);
			}

			lbltimes->Text = watch->ElapsedMilliseconds + " ms";
		}
		catch (Exception^ e)
		{
			MessageBox::Show("ERROR DETECTADO" + e->Message, "OPERACION CAMBIO DE BASE M A N", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
