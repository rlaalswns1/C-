// C��� ( ��� : printf(), �Է� : scanf_s())
// C++��� ( std::cout :  ���, std::cin : �Է� )

// ��Ʈ���̶�?
// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧	

#pragma region ������
#pragma region ���� ������
// << : ���Կ�����
// �ڽ��� ������ ���� ��ȯ�ϴ� ������
#pragma endregion

#pragma region ���� ������
// >> : ���� ������
//���ۿ� ������ ���� NULL ���ڱ����� ���� ���� ������ �����ϴ� ������
#pragma endregion

#pragma region ���� ���� ������
//���� ���� ������
//���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ����ϴ� ������

//(���� ������) :: 
#pragma region ���� ���� ������ ���ǻ���
//���� ���� �����ڴ� ���������� ���� �̸��� ���� ������ ����Ǿ�����
//���� ����� ������ ����� ������ �̸��� ����ϴ�
//���� ��Ģ�� �����ϹǷ� ���������� ȣ�� ���� ����
#pragma endregion

#pragma endregion

#pragma endregion

#pragma region �ּ�
#pragma region �޸� �ּ� �Ҵ�
//          ptr                  �����Ҵ��� �޸�
// [ 4 byte �޸� ���� �ּ� ] ------> [][][][] 
//int* ptr = new int;

// new ��ü() ������ ȣ��
#pragma endregion
#pragma endregion

#pragma region ������
//������
//� ������ �޸� ������ �Ǵٸ� �̸�
#pragma region ����ī��Ʈ
//�����ϰ� �ִ� ����Ʈ �������� ���� ���� ī��Ʈ�ϰ� ��
//���� ī��Ʈ(Reference Counting)
//�ش� �޸𸮰� �����ϴ� �����Ͱ� ����� ��Ÿ���� ��
#pragma endregion

#pragma endregion

#pragma region ���� �Ҵ�
#pragma region C VS C++
// C���
// malloc()
//free()

// C++
// new �޸� �Ҵ�
// delete �޸� ����

// malloc() �����ڰ� ȣ����� ����

#pragma endregion

#pragma endregion

#pragma region namespace
#pragma region �̸������̶�?
//�̸�����
// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� ����
#pragma endregion

#pragma region �̸����� �Ӽ�
// �Ӽ�
// -> ���� 

// ���
// -> �Լ�
#pragma endregion
#pragma endregion

#pragma region auto
#pragma region auto��?
//auto (�ڷ��� �߷�)
// ����� ������ �ʱ�ȭ ���� ����Ͽ� 
//�ش� ������ �߷��ϵ��� �����Ϸ����� �����ϴ� ���
#pragma endregion

#pragma region auto ����
//                       = new PlayFab( );  �հ� ��ġ�Ҷ���
//auto�� �Ű������� ����� �� ����
// auto�� ����� ���� ������ ���� �־� �־�� ��			
#pragma endregion
#pragma endregion

#pragma region class
#pragma region class��?
//Ŭ����
// ����� ���� ������ �������� �Ӽ���
//�Լ��� ���ԵǾ� ������, Ŭ������ ����
//��ü�� �����Ͽ� �����ϰ� ����� �� �ִ� ����ü
#pragma endregion

#pragma region ���� ������
// ���� �����ڶ�?
// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������
// �����ϴ� ������
#pragma endregion

#pragma region ����
// ����(public)
//Ŭ���� �ܺο��� ��𼭵��� ������ �� �ִ� ���� ������
#pragma endregion

#pragma region �����
// �����(private)
//Ŭ���� ���ο����� �Ӽ��� ������ �� ������, 
//Ŭ������ ���� �����ڸ� �������� ������ ������� ���������ڰ� ������
#pragma endregion

#pragma region ��ȣ
// ��ȣ(protected)
//Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����������
//Ŭ������ �Ӽ��� ������ �� �ִ� ���� ������
#pragma endregion

#pragma endregion

#pragma region Program
//SDK:����Ʈ ��ġ
//API �Լ�(  )
//Ŭ���� ��ȯ PhotonManager( ), PlayFab( ) 30~40��
#pragma endregion

#pragma region for��
#pragma region for VS foreach
//for (�ʱⰪ; ���ǽ�; ������)\

//���� ��� for�� (foreach)
#pragma endregion
#pragma endregion

#pragma region ������ & �Ҹ���
#pragma region ������
//������
// Ŭ������ �ν��Ͻ��� �����Ǵ� �������� 
// �ڵ����� ȣ��Ǵ� Ư���� ��� �Լ�
#pragma endregion

#pragma region ������ ����
// �������� ��� ��ü�� ������ �� �� �ѹ��� ȣ��Ǹ�,
// �����ڴ� ��ȯ���� �������� ����

// �׷��Ƿ�, �����ڰ� ȣ����� ������ ��ü�� ����
// �޸𸮴� �Ҵ���� ����

//public:  �ڵ� ȣ��� ������ �� �����
// default : �⺻ �����ڷ� ��������� �����ϴ� Ű����
#pragma endregion

#pragma region ���� ������
//���� ������
//���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� ������
#pragma endregion

#pragma region �Ҹ���
// �Ҹ��� 
// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ �⺸ �Լ�
#pragma endregion

#pragma region �Ҹ��� ����
// �Ҹ��ڴ� ��ü�� �޸𸮿��� ������ ��
// �� �ѹ��� ȣ��Ǹ�, �Ҹ��ڿ��Դ� �Ű�������
// �����ϸ� ��� �Ұ�
#pragma endregion

#pragma region ���� �Ҹ���
//���� �Ҹ���
//��ü�� �Ҹ�ɶ� ���� �����ϰ� �ִ� ��ü��
//��� ���� ��� ȣ��Ǵ� �Ҹ���
#pragma endregion

#pragma region ���� �Ҹ�
// ��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ�
// ���� ����ǰ� ���� Ŭ������ �Ҹ��ڰ� ����Ǿ�� 
// �ϱ� ������ ���� �ð��� �޸𸮿� �Ҵ��
// ��ü�� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� �մϴ�.
#pragma endregion

#pragma endregion

#pragma region �Ű�����
#pragma region �Ű�����
//�⺻ �Ű�����
// �Ű������� �⺻���� �����Ͽ� �Լ��� ȣ��� ��
// �μ� ���� ȣ�� �� �� �ֵ��� �����ϴ� �Ű�����
#pragma endregion

#pragma region �Ű����� ����
//�⺻ �Ű������� ������ ���� �����ʺ��� ������
#pragma endregion
#pragma endregion

#pragma region ����
#pragma region ���� ����
//���� ����
// ��ü�� ������ �� ���� ���� �ƴ� �ν��Ͻ� ��ü��
// ���� �����Ͽ� ���� �ٸ� �޸𸮸� ����ϴ� ����
#pragma endregion

#pragma region ���� ����
//���� ����
// ��ü�� ������ �� �ּҰ��� �����Ͽ�,
// ���� �޸𸮸� ����Ű�� ����
#pragma endregion

#pragma region ���� ���� ����
	//���� ������ ��� ���� ��ü�� ���� ���� �޸� ������
	//�����ϰ� �ֱ� ������ �ϳ��� ��ü�� ���� �����ϰ� �Ǹ�
	//���� ������ ��ü�� �Բ� ������ ����
#pragma endregion
#pragma endregion

#pragma region ���
#pragma region ���
//���
//���� Ŭ������ �Ӽ��� ���� Ŭ������ 
//����� �� �ֵ��� �������ִ� ���
#pragma endregion

#pragma region ���� ���
	//���� ���
	//�ϳ��� Ŭ������ �������� ���� Ŭ������ ��� �޴� ��
	//���� ����� ���� ���� ���� Ŭ������ �ߺ��Ǵ�
	//�Ӽ��� ���� �� �� �ֱ� ������ ���� ���� �����ڸ�
	//���ؼ� ���� Ŭ������ �̸��� �����ϰ� �Ӽ��� ���
#pragma endregion

#pragma region private ���
//private�� ��� �� ���� �� �� �ִ� ��� ������ �������� �ʽ��ϴ�.
#pragma endregion

#pragma region protected ���
//protected�� ��� �� ���� �� �� �ִ� ��� ������ �������� �ʽ��ϴ�.
#pragma endregion
#pragma endregion

#pragma region ������
#pragma region this ������
//this ������
//�ڱ� �ڽ��� ����Ű�� ������

#pragma region this ������ ����
//this�����ʹ� ȣ��� ��ü�� ����Ű�� ��� ������
//��������� �ڷ����̹Ƿ� ������ ��ü�� �ٸ�����
//����Ű���� �� �� ����
#pragma endregion
#pragma endregion

#pragma endregion

#pragma region �����Լ�
#pragma region ���� ���� �Լ�
//���� ���� �Լ�
//���� Ŭ�������� ������ �� ������ ����ϴ� ��� �Լ�
#pragma endregion
#pragma region ���� �����Լ�(�߻�Ŭ����)
//���� �����Լ�
//�߻� Ŭ����
//�ϳ��� ����	 ���� �Լ��� ������ Ŭ������ �߻� Ŭ������ ����
//�߻� Ŭ������ ��� ������ Ÿ������ ��밡��
#pragma region �����Լ� ����
//�����Լ��� 1�� �̻��� �����Լ��� ���ϴ� Ŭ������ ������
//��ü �ּҿ� �����Լ� ���̺��� �߰�
#pragma endregion
#pragma endregion
#pragma region ���� �Ҹ���
//���� �Ҹ���
//��ü�� �Ҹ�ɶ� ���� �����ϰ� �ִ� ��ü��
//��� ���� ��� ȣ��Ǵ� �Ҹ���
#pragma endregion
#pragma endregion

#pragma region ���׼�
//���׼�
//�������� ���� ���� ��ü�� ������ �����
//���� �ٸ� ������� ó�� �� �� �ִ� ���
#pragma endregion

#pragma region �����ε�
#pragma region �Լ��� �����ε�
//�Լ��� �����ε�
// ���� �̸��� �Լ��� �Ű������� �ڷ����� �Ű�������
// ���� �����Ͽ� ���� ���� ������ �� �ִ� ���
#pragma region �Լ��� �����ε� ����
//�Լ��� �����ε��� ��� �Լ��� �Ű������� �����ϴ� �μ��� ���·� ����
//ȣ���ϹǷ�, ��ȯ������ �Լ��� �����ε� ����X
#pragma endregion
#pragma endregion

#pragma endregion

#pragma region Casting
#pragma region UP-Casting
//UP - Casting
//���� Ŭ������ ������ ���� �� �ִ� ��ü�� ����Ŭ������
//�ڷ����� �ο��ؼ�, ����Ŭ����ó�� ����ϴ� ��
#pragma endregion
#pragma endregion

#pragma region ������
#pragma region ����Ʈ ������
#pragma region ����Ʈ ������
//����Ʈ ������
// ������ó�� �����ϴ� Ŭ���� ���ø�����
// ����� ���� �޸𸮸� �ڵ����� �����ϴ� �������Դϴ�.
#pragma region unique_ptr ������
//unique_ptr ������
// �ϳ��� �޸� ������ ����ų �� �ִ� �������Դϴ�.
#pragma region �ʱ�ȭ
//ex 2)
//std::unique_ptr<int> uniquePtr = std::make_unique<int>(new int(5));
#pragma endregion
#pragma endregion

#pragma region shared_ptr ������
//shared_ptr ������
//� �ϳ��� ��ü�� �����ϴ� ����Ʈ �������� ������ �����ϴ� ������
#pragma region �ʱ�ȭ
//ù ��° �ʱ�ȭ ���
//shared_ptr<int> shared_ptr(new int(999));

//�� ��° �ʱ�ȭ ���
//shared_ptr<Item> shared_ptr1 = std::make_shared<Item>();
//shared_ptr<Item> shared_ptr1(new Item);
#pragma endregion
#pragma endregion

#pragma region weak_ptr ������
//weak_ptr ������
//�ϳ��̻��� shared_ptr �ν��Ͻ��� �����ϴ� ��ü��
//���� ������ ����������, ���� ī��Ʈ�� ���Ե��� �ʴ�
//����Ʈ ������
#pragma endregion

#pragma region ����ī��Ʈ
//�����ϰ� �ִ� ����Ʈ �������� ���� ���� ī��Ʈ�ϰ� ��
//���� ī��Ʈ(Reference Counting)
//�ش� �޸𸮰� �����ϴ� �����Ͱ� ����� ��Ÿ���� ��
#pragma endregion
#pragma endregion
#pragma endregion
#pragma endregion

#pragma region ���ø�
#pragma region ���ø�
//���ø�
// �Լ��� ũ������ �ٽ� �ۼ����� �ʾƵ�
// �� ���� �ڷ������� ������ �� �ֵ��� ���ִ� ����Դϴ�.
#pragma endregion

#pragma region ���ø��� Ư��ȭ 
//���ø��� Ư��ȭ
// ���ø� �Լ��� ���������, Ư�� �Ű������� ���ؼ���
// ���� ó���� �ϱ� ���� ����ϴ� ����Դϴ�.
#pragma endregion
#pragma endregion

#pragma region Final
//final
//Ŭ������ ���� �Լ��� ���� Ŭ�������� �������� ��  ������ �����ϴ� ���
#pragma endregion

#pragma region Friend
//Friend
//�������� ������ Ŭ�������� ��� ������
//������ �� �ֵ��� �����ϴ� ���
#pragma endregion

#pragma region �����̳�
#pragma region �����̳� �����
//�����̳� �����
//���� �����̳��� �������̽��� �����Ͽ� ���� �����
//���ѵǰų� ������ �����̳�
#pragma endregion

#pragma region �����̳� ����� ����
//�����̳ʿ� �����Ͱ� ���� �� pop()�� �õ��ϸ� ��Ÿ�� ����
#pragma endregion

#pragma region ���� �����̳�
//���� �����̳�
//Key�� Valueó�� �����ִ� �����͸� �ϳ��� ������ �����ϴ� �����̳�
#pragma endregion

#pragma region Clear
//clear() : ��� ���Ҹ� �����ϴ� �Լ�
//set.clear();
#pragma endregion

#pragma region Set
//set�� �ڵ����� ������ �Ͼ�ϴ�.
#pragma endregion

#pragma region empty
//empty() : �����̳ʰ� ������� Ȯ���ϴ� �Լ�
//����ٸ� (true) 1�� ��ȯ
//������� ������ (false) 0�� ��ȯ
#pragma endregion

#pragma endregion

#pragma region STL ǥ�� ���ø� ���̺귯��
//STL ǥ�� ���ø� ���̺귯��
// C++���� ����� �� �ִ� �����̳� class�� �˰�����
// �Ϲ�ȭ ���Ѽ� ����� �� �ִ� �ڷᱸ���� �����ϴ� ���̺귯���Դϴ�.
#pragma endregion