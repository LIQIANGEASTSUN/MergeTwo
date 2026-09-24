namespace GameCore.Configuration.WeakReferences.Providers
{
	public abstract class WeakReferenceTargetProvider<TAsset, TKey> where TAsset : class
	{
		public TAsset GetInstance(WeakReference<TAsset, TKey> weakReference)
		{
			return null;
		}

		public abstract TAsset ProvideInstance(WeakReference<TAsset, TKey> reference);

		public WeakReferenceTargetProvider()
		{
		}
	}
}
