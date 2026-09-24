using TLF;
using UnityEngine;

public class ResBase : MonoBehaviour
{
	public ResLoader resLoader;

	public virtual void initView()
	{
	}

	public virtual void Recovery()
	{
		Singleton<ResCacheManager>.Instance.RecoveryRes(this);
	}

	public virtual void Despose()
	{
	}
}
