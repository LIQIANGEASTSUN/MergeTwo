using fat.gamekitdata;

namespace FAT
{
	public interface IUserDataHolder
	{
		void SetData(LocalSaveData archive);

		void FillData(LocalSaveData archive);
	}
}
