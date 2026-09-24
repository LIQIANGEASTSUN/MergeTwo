namespace Framework.Core.Services.Storage
{
	public interface IPersistentStorageService
	{
		bool Enabled { get; }

		string DefaultStoragePath { get; }

		string GetRaw(string entryId);

		void SetRaw(string entryId, string value);

		T Get<T>(string entryId, bool handleCorrupted = true);

		void Set<T>(string entryId, T value);

		bool HasEntry(string entryId);

		bool HasEntry(string entryId, out string err);

		void Delete(string entryId);

		void Wipe();

		bool HasLock();

		void Lock();

		void Unlock();
	}
}
