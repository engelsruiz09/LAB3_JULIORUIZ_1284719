#pragma once

namespace LAB3JULIORUIZ1284719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;//esta cosa >;v

	/// <summary>
	/// Resumen de multisumaiterativo
	/// </summary>
	public ref class multisumaiterativo : public System::Windows::Forms::Form
	{
	public:
		multisumaiterativo(void)
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
		~multisumaiterativo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbltiempos;
	protected:
	private: System::Windows::Forms::LinkLabel^ lblsolucion;
	private: System::Windows::Forms::TextBox^ txbval2;
	private: System::Windows::Forms::TextBox^ txbval1;
	private: System::Windows::Forms::Label^ lblvalor2;
	private: System::Windows::Forms::Label^ lblnum1;
	private: System::Windows::Forms::Button^ btncalculacion;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(multisumaiterativo::typeid));
			this->lbltiempos = (gcnew System::Windows::Forms::Label());
			this->lblsolucion = (gcnew System::Windows::Forms::LinkLabel());
			this->txbval2 = (gcnew System::Windows::Forms::TextBox());
			this->txbval1 = (gcnew System::Windows::Forms::TextBox());
			this->lblvalor2 = (gcnew System::Windows::Forms::Label());
			this->lblnum1 = (gcnew System::Windows::Forms::Label());
			this->btncalculacion = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbltiempos
			// 
			this->lbltiempos->AutoSize = true;
			this->lbltiempos->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->lbltiempos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltiempos->Location = System::Drawing::Point(36, 224);
			this->lbltiempos->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbltiempos->Name = L"lbltiempos";
			this->lbltiempos->Size = System::Drawing::Size(45, 16);
			this->lbltiempos->TabIndex = 13;
			this->lbltiempos->Text = L"label1";
			// 
			// lblsolucion
			// 
			this->lblsolucion->AutoSize = true;
			this->lblsolucion->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->lblsolucion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblsolucion->Location = System::Drawing::Point(242, 116);
			this->lblsolucion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblsolucion->Name = L"lblsolucion";
			this->lblsolucion->Size = System::Drawing::Size(80, 20);
			this->lblsolucion->TabIndex = 12;
			this->lblsolucion->TabStop = true;
			this->lblsolucion->Text = L"linkLabel1";
			// 
			// txbval2
			// 
			this->txbval2->Location = System::Drawing::Point(152, 69);
			this->txbval2->Margin = System::Windows::Forms::Padding(2);
			this->txbval2->Name = L"txbval2";
			this->txbval2->Size = System::Drawing::Size(90, 20);
			this->txbval2->TabIndex = 11;
			// 
			// txbval1
			// 
			this->txbval1->Location = System::Drawing::Point(152, 24);
			this->txbval1->Margin = System::Windows::Forms::Padding(2);
			this->txbval1->Name = L"txbval1";
			this->txbval1->Size = System::Drawing::Size(90, 20);
			this->txbval1->TabIndex = 10;
			// 
			// lblvalor2
			// 
			this->lblvalor2->AutoSize = true;
			this->lblvalor2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblvalor2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblvalor2->Location = System::Drawing::Point(65, 69);
			this->lblvalor2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblvalor2->Name = L"lblvalor2";
			this->lblvalor2->Size = System::Drawing::Size(66, 20);
			this->lblvalor2->TabIndex = 9;
			this->lblvalor2->Text = L"Valor 2";
			// 
			// lblnum1
			// 
			this->lblnum1->AutoSize = true;
			this->lblnum1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblnum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblnum1->Location = System::Drawing::Point(65, 24);
			this->lblnum1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblnum1->Name = L"lblnum1";
			this->lblnum1->Size = System::Drawing::Size(66, 20);
			this->lblnum1->TabIndex = 8;
			this->lblnum1->Text = L"Valor 1";
			// 
			// btncalculacion
			// 
			this->btncalculacion->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btncalculacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncalculacion->Location = System::Drawing::Point(94, 166);
			this->btncalculacion->Margin = System::Windows::Forms::Padding(2);
			this->btncalculacion->Name = L"btncalculacion";
			this->btncalculacion->Size = System::Drawing::Size(163, 52);
			this->btncalculacion->TabIndex = 7;
			this->btncalculacion->Text = L"Calcular";
			this->btncalculacion->UseVisualStyleBackColor = false;
			this->btncalculacion->Click += gcnew System::EventHandler(this, &multisumaiterativo::btncalculacion_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(91, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 18);
			this->label1->TabIndex = 14;
			this->label1->Text = L"RESPUESTA =";
			// 
			// multisumaiterativo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(365, 259);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbltiempos);
			this->Controls->Add(this->lblsolucion);
			this->Controls->Add(this->txbval2);
			this->Controls->Add(this->txbval1);
			this->Controls->Add(this->lblvalor2);
			this->Controls->Add(this->lblnum1);
			this->Controls->Add(this->btncalculacion);
			this->DoubleBuffered = true;
			this->Name = L"multisumaiterativo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MULTIPLICACIÓN ITERATIVO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//dejolinkdelstopwatchhttps://docs.microsoft.com/en-us/dotnet/api/system.diagnostics.stopwatch.startnew?redirectedfrom=MSDN&view=net-5.0#System_Diagnostics_Stopwatch_StartNew
		int multiplisuma(int valor1, int valor2) {
			int result = 0;
			if (valor2 == 1)
			{
				return valor1;

			}
			if (valor2 > 0)
			{
				for (int i = 1; i <= valor2; i++)
				{
					result = result + valor1;
				}
				return result;
			}
			else if (valor2 < 0)
			{
				for (int i = 1; i <= -valor2; i++)
				{
					result = result - +valor1;
				}
				return result;
			}


		}
	private: System::Void btncalculacion_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			Stopwatch^ watch = gcnew Stopwatch();

			watch->Start();
			lblsolucion->Text = "" + multiplisuma(Convert::ToInt32(txbval1->Text), Convert::ToInt32(txbval2->Text));
			watch->Stop();
			MessageBox::Show("OPERACION REALIZADA EXITOSAMENTE", "OPERACION MULTISUMA", MessageBoxButtons::OK, MessageBoxIcon::Information);

			for (int i = 0; i < 10000; i++)//segun la internet tenia que llevar un for para funcionar el stopwatch
			{
				Console::Write(i);
			}

			lbltiempos->Text = watch->ElapsedMilliseconds + " ms";
		}
		catch (Exception^ e)
		{
			MessageBox::Show("ERROR DETECTADO" + e->Message, "OPERACION SUMA", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
