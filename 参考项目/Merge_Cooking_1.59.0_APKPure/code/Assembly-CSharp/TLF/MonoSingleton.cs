using UnityEngine;

namespace TLF;

public abstract class MonoSingleton<T> : MonoBehaviour, ISingleton where T : MonoSingleton<T>
{
	protected static T mInstance;

	public static T Instance
	{
		get
		{
			if ((Object)(object)mInstance == (Object)null)
			{
				mInstance = MonoSingletonCreator.CreateMonoSingleton<T>();
			}
			return mInstance;
		}
	}

	public virtual void OnSingletonInit()
	{
	}

	public virtual void Dispose()
	{
		if (MonoSingletonCreator.IsUnitTestMode)
		{
			Transform val = ((Component)this).transform;
			do
			{
				Transform parent = val.parent;
				Object.DestroyImmediate((Object)(object)((Component)val).gameObject);
				val = parent;
			}
			while ((Object)(object)val != (Object)null);
			mInstance = null;
		}
		else
		{
			Object.Destroy((Object)(object)((Component)this).gameObject);
		}
	}

	protected virtual void OnDestroy()
	{
		mInstance = null;
	}
}
