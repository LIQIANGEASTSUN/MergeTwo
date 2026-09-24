using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using TLF;
using TLF.SkinSystem;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;

[PrefabPath("GoodsChoiceView_new")]
public class GoodsChoiceView_newLogic : GoodsChoiceViewLogic, IBaseViewSkin
{
	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CApplySkinAsync_003Ed__2 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GoodsChoiceView_newLogic _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0054: Unknown result type (might be due to invalid IL or missing references)
			//IL_0059: Unknown result type (might be due to invalid IL or missing references)
			//IL_0060: Unknown result type (might be due to invalid IL or missing references)
			//IL_001c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0021: Unknown result type (might be due to invalid IL or missing references)
			//IL_0024: Unknown result type (might be due to invalid IL or missing references)
			//IL_0029: Unknown result type (might be due to invalid IL or missing references)
			//IL_003d: Unknown result type (might be due to invalid IL or missing references)
			//IL_003e: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			GoodsChoiceView_newLogic goodsChoiceView_newLogic = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					UniTask val = ViewSkinManager.GetInstance().ApplySysViewSkin(((Component)goodsChoiceView_newLogic).GetComponent<SkinApplier>());
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CApplySkinAsync_003Ed__2>(ref val2, ref this);
						return;
					}
				}
				else
				{
					val2 = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
				}
				val2.GetResult();
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003C_003Et__builder.SetResult();
		}

		void IAsyncStateMachine.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			this.MoveNext();
		}

		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
			_003C_003Et__builder.SetStateMachine(stateMachine);
		}

		void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
		{
			//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
			this.SetStateMachine(stateMachine);
		}
	}

	protected override void InitData()
	{
		//IL_0012: Unknown result type (might be due to invalid IL or missing references)
		Singleton<GameLevelManager>.Instance.SetGoodsIcon(ItemIcon, mGoodsBaseVo, null, Vector3.one);
		if (mGameGoodsVo.ChoiceRewards.Count > 0)
		{
			GoodsItem1.SetSelfActive<GoodsChoiceItem>(true);
			GoodsItem1.Init(mGameGoodsVo.ChoiceRewards[0], 0, this);
		}
		else
		{
			GoodsItem1.SetSelfActive<GoodsChoiceItem>(false);
		}
		if (mGameGoodsVo.ChoiceRewards.Count > 1)
		{
			GoodsItem2.SetSelfActive<GoodsChoiceItem>(true);
			GoodsItem2.Init(mGameGoodsVo.ChoiceRewards[1], 1, this);
		}
		else
		{
			GoodsItem2.SetSelfActive<GoodsChoiceItem>(false);
		}
		if (mGameGoodsVo.ChoiceRewards.Count > 2)
		{
			GoodsItem3.SetSelfActive<GoodsChoiceItem>(true);
			GoodsItem3.Init(mGameGoodsVo.ChoiceRewards[2], 2, this);
		}
		else
		{
			GoodsItem3.SetSelfActive<GoodsChoiceItem>(false);
		}
	}

	protected override void SetButtonState()
	{
		if ((Object)(object)mCurrentSelect != (Object)null)
		{
			SureButton.SetSelfActive(active: true);
			NoSureButton.SetSelfActive(active: false);
		}
		else
		{
			SureButton.SetSelfActive(active: false);
			NoSureButton.SetSelfActive(active: true);
		}
	}

	[AsyncStateMachine(typeof(_003CApplySkinAsync_003Ed__2))]
	public UniTask ApplySkinAsync()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CApplySkinAsync_003Ed__2 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CApplySkinAsync_003Ed__2>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public UniTask RefreshSkinAsync()
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		return ApplySkinAsync();
	}
}
