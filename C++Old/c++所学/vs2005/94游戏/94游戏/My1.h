#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;


namespace My94��Ϸ {

	/// <summary>
	/// My1 ժҪ
	/// </summary>
	public ref class My1 :  public System::ComponentModel::Component
	{
	public:
		My1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}
		My1(System::ComponentModel::IContainer ^container)
		{
			/// <summary>
			/// Windows.Forms ��׫д�����֧���������
			/// </summary>

			container->Add(this);
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~My1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			components = gcnew System::ComponentModel::Container();
		}
#pragma endregion
	};
}
