using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Core.PathCore;
using DG.Tweening.Plugins.Options;
using Spine;
using Spine.Unity;
using TLF;
using TMPro;
using UniRx.Async;
using UniRx.Async.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class GameLevelItem : ResBase
{
	[Serializable]
	[CompilerGenerated]
	private sealed class _003C_003Ec
	{
		public static readonly _003C_003Ec _003C_003E9 = new _003C_003Ec();

		public static UnityAction<float> _003C_003E9__149_2;

		public static TweenCallback _003C_003E9__198_0;

		internal void _003CStartClearVineAnim_003Eb__149_2(float dt)
		{
			AudioManager.GetInstance().PlayEffect("숋끥於爌摇&\u009a厙刦碷\ud9f7ŀ");
		}

		internal void _003CPlayUndoShow_003Eb__198_0()
		{
			AudioManager.Instance.PlayEffect("숇끎澼瘈楫?Â叁煥_4끭r唨䧑");
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass182_0
	{
		public GameLevelItem _003C_003E4__this;

		public Action action;

		internal void _003CPlayGoodsTakeoutNewAni_003Eb__0(float dt1)
		{
			_003C_003E4__this.NewTakeoutGo.SetSelfActive(active: true);
		}

		internal void _003CPlayGoodsTakeoutNewAni_003Eb__1(float dt1)
		{
			_003C_003E4__this.HideGoodsTakeoutNewAni();
		}

		internal void _003CPlayGoodsTakeoutNewAni_003Eb__2()
		{
			action?.Invoke();
			if (IGoodsBaseVo.IsCreator(_003C_003E4__this.goodsBaseVo.type) || IGoodsBaseVo.IsConversion(_003C_003E4__this.goodsBaseVo.type) || IGoodsBaseVo.IsInstrument(_003C_003E4__this.goodsBaseVo.type) || IGoodsBaseVo.IsTreasureBox(_003C_003E4__this.goodsBaseVo.type))
			{
				_003C_003E4__this.UpdateIcon();
			}
		}
	}

	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass87_0
	{
		public GameLevelItem _003C_003E4__this;

		public Action action;

		internal void _003CPlayItemShowA_003Eb__0()
		{
			_003C_003E4__this.UpdateMaxLevel();
			action.InvokeGracefully();
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CDelayRecycleEffect_003Ed__101 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameObject topGo;

		public GameObject bottomGo;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_005e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0063: Unknown result type (might be due to invalid IL or missing references)
			//IL_006a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0023: Unknown result type (might be due to invalid IL or missing references)
			//IL_0028: Unknown result type (might be due to invalid IL or missing references)
			//IL_002b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0030: Unknown result type (might be due to invalid IL or missing references)
			//IL_0044: Unknown result type (might be due to invalid IL or missing references)
			//IL_0045: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(1.0), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CDelayRecycleEffect_003Ed__101>(ref val2, ref this);
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
				if ((Object)(object)topGo != (Object)null)
				{
					GameLevelDefine.RecycleGameObject(topGo);
				}
				if ((Object)(object)bottomGo != (Object)null)
				{
					GameLevelDefine.RecycleGameObject(bottomGo);
				}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CItemFlyAnimA_003Ed__124 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		public bool isPlayDownEffect;

		public int realityConsume;

		public int dropRate;

		public bool makeComplete;

		public Transform startTrans;

		private void MoveNext()
		{
			//IL_00b1: Unknown result type (might be due to invalid IL or missing references)
			//IL_00c1: Unknown result type (might be due to invalid IL or missing references)
			//IL_00c6: Unknown result type (might be due to invalid IL or missing references)
			//IL_00cd: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d2: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d4: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d5: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e6: Unknown result type (might be due to invalid IL or missing references)
			//IL_00eb: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ed: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
			//IL_0102: Unknown result type (might be due to invalid IL or missing references)
			//IL_011e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0124: Unknown result type (might be due to invalid IL or missing references)
			//IL_012d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0133: Unknown result type (might be due to invalid IL or missing references)
			//IL_0210: Unknown result type (might be due to invalid IL or missing references)
			//IL_0221: Unknown result type (might be due to invalid IL or missing references)
			//IL_023b: Unknown result type (might be due to invalid IL or missing references)
			//IL_025a: Unknown result type (might be due to invalid IL or missing references)
			//IL_026a: Unknown result type (might be due to invalid IL or missing references)
			//IL_026b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0399: Unknown result type (might be due to invalid IL or missing references)
			//IL_03a0: Unknown result type (might be due to invalid IL or missing references)
			//IL_03a5: Unknown result type (might be due to invalid IL or missing references)
			//IL_03a6: Unknown result type (might be due to invalid IL or missing references)
			//IL_03a8: Unknown result type (might be due to invalid IL or missing references)
			//IL_03bc: Unknown result type (might be due to invalid IL or missing references)
			//IL_03be: Unknown result type (might be due to invalid IL or missing references)
			//IL_03c5: Unknown result type (might be due to invalid IL or missing references)
			//IL_03c6: Unknown result type (might be due to invalid IL or missing references)
			//IL_0376: Unknown result type (might be due to invalid IL or missing references)
			//IL_0385: Unknown result type (might be due to invalid IL or missing references)
			//IL_0287: Unknown result type (might be due to invalid IL or missing references)
			//IL_028e: Unknown result type (might be due to invalid IL or missing references)
			//IL_02bc: Unknown result type (might be due to invalid IL or missing references)
			//IL_02c3: Unknown result type (might be due to invalid IL or missing references)
			//IL_0476: Unknown result type (might be due to invalid IL or missing references)
			//IL_0354: Unknown result type (might be due to invalid IL or missing references)
			//IL_0362: Unknown result type (might be due to invalid IL or missing references)
			//IL_0499: Unknown result type (might be due to invalid IL or missing references)
			//IL_04a3: Unknown result type (might be due to invalid IL or missing references)
			//IL_04d8: Unknown result type (might be due to invalid IL or missing references)
			//IL_0516: Unknown result type (might be due to invalid IL or missing references)
			//IL_0554: Unknown result type (might be due to invalid IL or missing references)
			//IL_0592: Unknown result type (might be due to invalid IL or missing references)
			//IL_05d0: Unknown result type (might be due to invalid IL or missing references)
			//IL_0324: Unknown result type (might be due to invalid IL or missing references)
			//IL_0332: Unknown result type (might be due to invalid IL or missing references)
			//IL_0689: Unknown result type (might be due to invalid IL or missing references)
			//IL_0693: Expected Obj, but got Unknown
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				GameLevelItem gameLevelItem2 = _003C_003E4__this;
				bool isPlayDownEffect = this.isPlayDownEffect;
				int realityConsume = this.realityConsume;
				int dropRate = this.dropRate;
				bool makeComplete = this.makeComplete;
				gameLevelItem.mPlayFlyAnim = true;
				gameLevelItem.SetItemScaleAnim(show: false);
				gameLevelItem.gameLevelGrid?.ResetGridBgAnimState();
				gameLevelItem.SetItemBackground(active: false);
				gameLevelItem.SetBingGoIcon(active: false);
				if (gameLevelItem.DragIcon.raycastTarget)
				{
					gameLevelItem.DragIcon.raycastTarget = false;
				}
				((Component)gameLevelItem).transform.SetParent(gameLevelItem.gameLevelGrid.parentLogic.DragItemParent);
				((Component)gameLevelItem).transform.localScale = Vector3.one;
				Vector3 position = ((Component)gameLevelItem).transform.position;
				Vector3 position2 = startTrans.position;
				Vector3 pointAtDistanceFromB = gameLevelItem.GetPointAtDistanceFromB(position2, position, gameLevelItem.gameLevelGrid.parentLogic.distanceB);
				Vector3.Distance(position2, pointAtDistanceFromB);
				((Component)gameLevelItem).transform.position = startTrans.position;
				Action overAction = () =>
				{
					//IL_0059: Unknown result type (might be due to invalid IL or missing references)
					//IL_006e: Unknown result type (might be due to invalid IL or missing references)
					Sequence flyScaleQuence2 = gameLevelItem2.flyScaleQuence;
					if (flyScaleQuence2 != null)
					{
						TweenExtensions.Kill((Tween)(object)flyScaleQuence2, false);
					}
					Sequence flyMoveQuence2 = gameLevelItem2.flyMoveQuence;
					if (flyMoveQuence2 != null)
					{
						TweenExtensions.Kill((Tween)(object)flyMoveQuence2, false);
					}
					((Component)gameLevelItem2).transform.SetParent(gameLevelItem2.gameLevelGrid.GameItemParent);
					((Component)gameLevelItem2).transform.localPosition = Vector3.zero;
					((Component)gameLevelItem2).transform.localScale = Vector3.one;
					gameLevelItem2.SetItemScaleAnim(show: true);
					gameLevelItem2.SetBingGoIcon(active: true);
					gameLevelItem2.DragIcon.raycastTarget = true;
					gameLevelItem2.mPlayFlyAnim = false;
					gameLevelItem2.UpdateIcon();
					gameLevelItem2.SetItemBackground(active: true);
					if (isPlayDownEffect && gameLevelItem2.goodsBaseVo != null && Enumerable.Contains(GameLevelManager.PlayDownEffecGoods, gameLevelItem2.goodsBaseVo.goodsID))
					{
						gameLevelItem2.PlayDesignatedEffect(gameLevelItem2.goodsBaseVo.GetIcon() + "晟e4끦g報㻜");
					}
					if (realityConsume > 1)
					{
						if (dropRate == 2)
						{
							gameLevelItem2.PlayOnceAnim("숏끜徿搐敗&\u0082厁숆끏撻爇潑\r\u0096厕匫橰ā讙ꝫ", "", 1f);
						}
						else if (dropRate == 4)
						{
							gameLevelItem2.PlayOnceAnim("숏끜徿昐敗&\u0082厁숞끏斫猟潝?\u009a厙숅끞暫欆彄\r\u009e厝", "", 1f);
						}
						else if (dropRate == 8)
						{
							gameLevelItem2.PlayOnceAnim("숏끜徿攐敗&\u0082厁숞끓涱攟杀;º厹수끥徽昙獛\"\u0082厁뻷", "", 1f);
						}
					}
					if (makeComplete && gameLevelItem2.goodsBaseVo != null)
					{
						IGoodsCookingVO goodsCookingVO = Singleton<GameLevelManager>.Instance.GetGoodsCookingVO(gameLevelItem2.goodsBaseVo.goodsID);
						if (goodsCookingVO != null && goodsCookingVO.completeEffect > 0)
						{
							string cookingCompleteName = GameLevelDefine.GetCookingCompleteName(goodsCookingVO.completeEffect);
							if (cookingCompleteName.IsNotNullAndEmpty())
							{
								gameLevelItem2.PlayDesignatedMakeEffect(cookingCompleteName);
							}
						}
					}
				};
				float num = position.x - position2.x;
				float num2 = position.y - position2.y;
				float num3 = 0f;
				float num4 = 0f;
				float num5 = 0f;
				float num6 = 0f;
				GameLevelGrid componentInParent = ((Component)startTrans).GetComponentInParent<GameLevelGrid>();
				int num7 = (((Object)(object)componentInParent != (Object)null) ? componentInParent.GetGridId() : gameLevelItem.gameLevelGrid.GetGridId());
				int gridId = gameLevelItem.gameLevelGrid.GetGridId();
				int num8 = gridId / 10;
				int num9 = gridId % 10;
				int num10 = num7 / 10;
				int num11 = num7 % 10;
				int num12 = Mathf.Abs(num8 - num10) + 1;
				int num13 = Mathf.Abs(num9 - num11) + 1;
				int num14 = num12 * 10 + num13;
				if (num8 - num10 > 0)
				{
					num14 = -num14;
				}
				if (paramsDic_2.ContainsKey(num14))
				{
					List<float> list = paramsDic_2[num14];
					num3 = list[0];
					num5 = list[1];
					num4 = list[2];
					num6 = list[3];
				}
				float num15 = position2.x + num * 0.5f;
				float num16 = position2.y + num * 0.5f;
				if (num == 0f)
				{
					num16 = position2.y + num * 0.5f;
				}
				else if (num2 <= 0.01f)
				{
					num16 = position2.y + (float)(100 / GameLevelViewLogic.PixelsPerUnit) * gameLevelItem.GetHorizontalScale(position2, pointAtDistanceFromB);
				}
				else if (num2 > 0f)
				{
					float num17 = pointAtDistanceFromB.x - position2.x;
					if (num17 < 0f)
					{
						num17 = 0f - num17;
					}
					int num18 = Mathf.RoundToInt(num17 * 100f / GameLevelViewLogic.GridWidth) + 1;
					float num19 = pointAtDistanceFromB.y - position2.y;
					if (num19 < 0f)
					{
						num19 = 0f - num19;
					}
					int num20 = Mathf.RoundToInt(num19 * 100f / GameLevelViewLogic.GridWidth) + 1;
					if (num18 <= 6 && num20 >= 0)
					{
						float num21 = 2f / (float)num18;
						if (num21 >= 1f)
						{
							num21 /= 1.15f;
						}
						float num22 = 1.5f / (float)num20;
						num15 = position2.x + num * num3;
						num16 = pointAtDistanceFromB.y - num2 * num5 - num21 + num22;
					}
					else
					{
						float num23 = 0.4f / (float)num18;
						num15 = position2.x + num * num3;
						num16 = pointAtDistanceFromB.y - num2 * num5 + num23;
					}
				}
				else
				{
					num15 = pointAtDistanceFromB.x - num * num4;
					num16 = position2.y + num2 * num6;
				}
				Vector3 controlPoint = new Vector3(num15, num16, pointAtDistanceFromB.z);
				Vector3[] beizerList = UIAnimationExtend.GetBeizerList(position2, controlPoint, pointAtDistanceFromB, 30);
				Vector3[] array = new Vector3[2] { pointAtDistanceFromB, position };
				float pathDistance = gameLevelItem.GetPathDistance(beizerList);
				float move1TimeMax = gameLevelItem.gameLevelGrid.parentLogic.move1TimeMax;
				float move1TimeMin = gameLevelItem.gameLevelGrid.parentLogic.move1TimeMin;
				float maxDistance = gameLevelItem.GetMaxDistance();
				float minDistance = gameLevelItem.GetMinDistance();
				float num24 = (move1TimeMax - move1TimeMin) * ((pathDistance - minDistance) / (maxDistance - minDistance));
				if (num24 < 0f)
				{
					num24 = 0f;
				}
				if (num24 > move1TimeMax - move1TimeMin)
				{
					num24 = move1TimeMax - move1TimeMin;
				}
				float num25 = move1TimeMin + num24;
				float move2Time = gameLevelItem.gameLevelGrid.parentLogic.move2Time;
				float delay = num25;
				if ((Object)(object)gameLevelItem.gameLevelGrid != (Object)null)
				{
					gameLevelItem.gameLevelGrid.PlayOnceEffect("숏끜徿䜐敗&\u0082厁숦끗於氧慑$\u009a厙숇끎疼漈䥫>Ú叙녤剩㵐\0逧\ud979", delay);
				}
				Sequence flyScaleQuence = gameLevelItem.flyScaleQuence;
				if (flyScaleQuence != null)
				{
					TweenExtensions.Kill((Tween)(object)flyScaleQuence, false);
				}
				((Component)gameLevelItem.ProduceAnim).transform.localScale = Vector3.one * 0.5f;
				gameLevelItem.flyScaleQuence = DOTween.Sequence();
				TweenSettingsExtensions.Append(gameLevelItem.flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)gameLevelItem.ProduceAnim).transform, new Vector3(0.5f, 0.5f, 1f), num25 * 0f), (Ease)2));
				TweenSettingsExtensions.Append(gameLevelItem.flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)gameLevelItem.ProduceAnim).transform, new Vector3(1.3f, 1.3f, 1f), num25 * 0.4f), (Ease)3));
				TweenSettingsExtensions.Append(gameLevelItem.flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)gameLevelItem.ProduceAnim).transform, new Vector3(0.7f, 0.7f, 1f), num25 * 0.6f), (Ease)2));
				TweenSettingsExtensions.Append(gameLevelItem.flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)gameLevelItem.ProduceAnim).transform, new Vector3(1.1f, 1.1f, 1f), move2Time * 0.5f), (Ease)3));
				TweenSettingsExtensions.Append(gameLevelItem.flyScaleQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)gameLevelItem.ProduceAnim).transform, new Vector3(1f, 1f, 1f), move2Time * 0.5f), (Ease)2));
				TweenSettingsExtensions.SetAutoKill<Sequence>(gameLevelItem.flyScaleQuence, true);
				Sequence flyMoveQuence = gameLevelItem.flyMoveQuence;
				if (flyMoveQuence != null)
				{
					TweenExtensions.Kill((Tween)(object)flyMoveQuence, false);
				}
				gameLevelItem.flyMoveQuence = TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Path, PathOptions>>(ShortcutExtensions.DOPath(((Component)gameLevelItem).transform, beizerList, num25, (PathType)0, (PathMode)1, 10, (Color?)null), (Ease)3));
				TweenSettingsExtensions.Append(gameLevelItem.flyMoveQuence, (Tween)(object)TweenSettingsExtensions.SetEase<TweenerCore<Vector3, Path, PathOptions>>(ShortcutExtensions.DOPath(((Component)gameLevelItem).transform, array, move2Time, (PathType)0, (PathMode)1, 10, (Color?)null), (Ease)6));
				TweenSettingsExtensions.SetAutoKill<Sequence>(gameLevelItem.flyMoveQuence, true);
				TweenSettingsExtensions.OnComplete<Sequence>(gameLevelItem.flyMoveQuence, (TweenCallback)(() =>
				{
					overAction();
				}));
				TweenExtensions.Play<Sequence>(gameLevelItem.flyMoveQuence);
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CMergeSuccessAnimA_003Ed__100 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		private void MoveNext()
		{
			//IL_0033: Unknown result type (might be due to invalid IL or missing references)
			//IL_0038: Unknown result type (might be due to invalid IL or missing references)
			//IL_0048: Unknown result type (might be due to invalid IL or missing references)
			//IL_005e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0068: Unknown result type (might be due to invalid IL or missing references)
			//IL_0084: Unknown result type (might be due to invalid IL or missing references)
			//IL_008e: Expected Obj, but got Unknown
			//IL_00ef: Unknown result type (might be due to invalid IL or missing references)
			//IL_012d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0165: Unknown result type (might be due to invalid IL or missing references)
			//IL_0186: Unknown result type (might be due to invalid IL or missing references)
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				GameLevelItem gameLevelItem2 = _003C_003E4__this;
				if ((Object)(object)gameLevelItem.ItemIcon != (Object)null)
				{
					Vector3 endScale = ((Component)gameLevelItem.ItemIcon).transform.localScale;
					((Component)gameLevelItem.ItemIcon).transform.localScale = Vector3.zero;
					TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOScale(((Component)gameLevelItem.ItemIcon).transform, endScale * 1.2f, 0.2f * GameConst.AnimationScale()), (TweenCallback)(() =>
					{
						//IL_0011: Unknown result type (might be due to invalid IL or missing references)
						ShortcutExtensions.DOScale(((Component)gameLevelItem2.ItemIcon).transform, endScale, 0.1f * GameConst.AnimationScale());
					}));
				}
				if ((Object)(object)gameLevelItem.gameLevelGrid != (Object)null)
				{
					Transform effectParent = gameLevelItem.gameLevelGrid.EffectParent;
					Transform effectBottomParent = gameLevelItem.gameLevelGrid.EffectBottomParent;
					switch (ABTestSwitchDefine.GetMergeSuccessEffectSwitch())
					{
					case 0:
						if ((Object)(object)effectParent != (Object)null)
						{
							UniTaskExtensions.Forget(DelayRecycleEffect(GameLevelDefine.CreateGameObjectAsync("숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽녟刱㵐\0逧\ud979", effectParent), null));
						}
						break;
					case 1:
						if ((Object)(object)effectParent != (Object)null && (Object)(object)effectBottomParent != (Object)null)
						{
							GameObject topGo2 = GameLevelDefine.CreateGameObjectAsync("숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽숄뀋徆䈅彑%\u0082厁删牫\ud9f7ń", effectParent);
							GameObject bottomGo2 = GameLevelDefine.CreateGameObjectAsync("숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽숄뀋徆䈅彑%\u0082厁畟B4끴v옽䷅", effectBottomParent);
							UniTaskExtensions.Forget(DelayRecycleEffect(topGo2, bottomGo2));
						}
						break;
					case 2:
						if ((Object)(object)effectParent != (Object)null && (Object)(object)effectBottomParent != (Object)null)
						{
							GameObject topGo = GameLevelDefine.CreateGameObjectAsync("숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽숄뀋徆䌅彑%\u0082厁删牫\ud9f7ń", effectParent);
							GameObject bottomGo = GameLevelDefine.CreateGameObjectAsync("숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽숄뀋徆䌅彑%\u0082厁畟B4끴v옽䷅", effectBottomParent);
							UniTaskExtensions.Forget(DelayRecycleEffect(topGo, bottomGo));
						}
						break;
					default:
						if ((Object)(object)effectParent != (Object)null)
						{
							UniTaskExtensions.Forget(DelayRecycleEffect(GameLevelDefine.CreateGameObjectAsync("숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽녟刱㵐\0逧\ud979", effectParent), null));
						}
						break;
					}
				}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayFeverFlambeCDEffect_003Ed__216 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		private void MoveNext()
		{
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				if ((ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff()) && (!ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV2Model.HasActivityRes) && (!ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeStageModel.HasActivityRes) && (!ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV3Model.HasActivityRes))
				{
					if ((Object)(object)gameLevelItem.mFeverFlambeCDEffectGo == (Object)null)
					{
						gameLevelItem.mFeverFlambeCDEffectGo = GameLevelDefine.CreateGameObjectAsync("숆끕瞶渇䍰=â叡숵끕䚩收呡\u001b\u001e匝숬끟涫戭癘3º厹숃끥徿\u3104敆7\u0082厁", gameLevelItem.EffectFeverRelayCDParent);
					}
					if ((Object)(object)gameLevelItem.mFeverFlambeCDEffectGo != (Object)null)
					{
						gameLevelItem.mFeverFlambeCDEffectGo.transform.LocalIdentity<Transform>();
						gameLevelItem.mFeverFlambeCDEffectGo.SetSelfActive(active: true);
					}
				}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayFeverFlambeEffect_003Ed__215 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		private void MoveNext()
		{
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				if ((ObjectManager.GetInstance().feverFlambeModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff()) && (!ObjectManager.GetInstance().feverFlambeModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeModel.HasActivityRes) && (!ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV2Model.HasActivityRes) && (!ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeStageModel.HasActivityRes) && (!ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff() || ObjectManager.GetInstance().feverFlambeV3Model.HasActivityRes))
				{
					if (!IGoodsBaseVo.IsInitiativeCreator(gameLevelItem.goodsBaseVo.type))
					{
						goto IL_012d;
					}
					int buffActivityId = ObjectManager.GetInstance().goodsBuffModel.GetBuffActivityId(GoodsBuffType.Generator_No_CD, gameLevelItem.goodsBaseVo.series);
					if (buffActivityId == 1410 || buffActivityId == 1550 || buffActivityId == 1551 || buffActivityId == 1910)
					{
						goto IL_012d;
					}
				}
				goto end_IL_0007;
				IL_012d:
				if (!gameLevelItem.mProduceBackground)
				{
					if ((Object)(object)gameLevelItem.mFeverFlambeEffectGo == (Object)null)
					{
						gameLevelItem.mFeverFlambeEffectGo = GameLevelDefine.CreateGameObjectAsync("숏끛皴攐䝸7Þ叝숏끳喭䤐汙\rZ卙숏끟沯愐䙆\u0014¶厵숵끘犼收浒;Î反焍㡉", gameLevelItem.EffectParent);
						if ((Object)(object)gameLevelItem.mFeverFlambeEffectGo != (Object)null)
						{
							gameLevelItem.mFeverFlambeEffectGo.transform.SetAsFirstSibling();
						}
					}
					if ((Object)(object)gameLevelItem.mFeverFlambeEffectGo != (Object)null)
					{
						gameLevelItem.mFeverFlambeEffectGo.SetSelfActive(active: true);
					}
				}
				end_IL_0007:;
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayFeverRelayCDEffect_003Ed__221 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		private void MoveNext()
		{
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				if (ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff() && ObjectManager.GetInstance().feverRelayV2Model.HasActivityRes)
				{
					if ((Object)(object)gameLevelItem.mFeverRelayCDEffect == (Object)null)
					{
						gameLevelItem.mFeverRelayCDEffect = GameLevelDefine.CreateGameObjectAsync("숆끕瞶渇䍰=â叡숵끕䚩收呡\u001b\u001e匝숸끟憫礹癑>\u008a厉晟f4끲gꤍ㺙", gameLevelItem.EffectFeverRelayCDParent);
					}
					if ((Object)(object)gameLevelItem.mFeverRelayCDEffect != (Object)null)
					{
						gameLevelItem.mFeverRelayCDEffect.transform.LocalIdentity<Transform>();
						gameLevelItem.mFeverRelayCDEffect.SetSelfActive(active: true);
					}
				}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayFeverRelayEffect_003Ed__220 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		private void MoveNext()
		{
			//IL_0104: Unknown result type (might be due to invalid IL or missing references)
			//IL_010e: Unknown result type (might be due to invalid IL or missing references)
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				if ((ObjectManager.GetInstance().feverRelayModel.IsActiveBuff() || ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff()) && (!ObjectManager.GetInstance().feverRelayModel.IsActiveBuff() || ObjectManager.GetInstance().feverRelayModel.HasActivityRes) && (!ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff() || ObjectManager.GetInstance().feverRelayV2Model.HasActivityRes) && !gameLevelItem.mProduceBackground)
				{
					if (!IGoodsBaseVo.IsInitiativeCreator(gameLevelItem.goodsBaseVo.type))
					{
						goto IL_00c7;
					}
					int buffActivityId = ObjectManager.GetInstance().goodsBuffModel.GetBuffActivityId(GoodsBuffType.Generator_No_CD, gameLevelItem.goodsBaseVo.series);
					if (buffActivityId == 1420 || buffActivityId == 1560)
					{
						goto IL_00c7;
					}
				}
				goto end_IL_0007;
				IL_00c7:
				if ((Object)(object)gameLevelItem.mFeverRelayEffect == (Object)null)
				{
					gameLevelItem.mFeverRelayEffect = GameLevelDefine.CreateGameObjectAsync("숏끛皴攐䝸7Þ叝숏끳喭䤐汙\rZ卙숏끟斯氐䙆\0\u009a厙숌끃斆弍慝 \u009a厙뺭", gameLevelItem.EffectParent);
				}
				if ((Object)(object)gameLevelItem.mFeverRelayEffect != (Object)null)
				{
					gameLevelItem.mFeverRelayEffect.transform.localScale = Vector3.one * 0.9f;
					gameLevelItem.mFeverRelayEffect.transform.SetAsFirstSibling();
					gameLevelItem.mFeverRelayEffect.SetSelfActive(active: true);
				}
				end_IL_0007:;
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayGoodsTakeout_003Ed__179 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		private void MoveNext()
		{
			GameLevelItem CS_0024_003C_003E8__locals6 = _003C_003E4__this;
			try
			{
				CS_0024_003C_003E8__locals6.HideGoodsTakeout();
				CS_0024_003C_003E8__locals6.TakeoutGo = GameLevelDefine.CreateGameObjectAsync("숎끕璶意杇\rÖ叕숟끟斶映歀\r\u009a厙刔暯\ud9ceŀ", CS_0024_003C_003E8__locals6.EffectParent);
				if ((Object)(object)CS_0024_003C_003E8__locals6.TakeoutGo != (Object)null)
				{
					TimeManager.GetInstance().Schedule(CS_0024_003C_003E8__locals6.TakeoutGo, (float dt1) =>
					{
						CS_0024_003C_003E8__locals6.HideGoodsTakeout();
					}, 2f, 1, 0f);
				}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayGoodsTakeoutNewAni_003Ed__182 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		public Action action;

		private _003C_003Ec__DisplayClass182_0 _003C_003E8__1;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_01d1: Unknown result type (might be due to invalid IL or missing references)
			//IL_01d6: Unknown result type (might be due to invalid IL or missing references)
			//IL_01dd: Unknown result type (might be due to invalid IL or missing references)
			//IL_0195: Unknown result type (might be due to invalid IL or missing references)
			//IL_019a: Unknown result type (might be due to invalid IL or missing references)
			//IL_019e: Unknown result type (might be due to invalid IL or missing references)
			//IL_01a3: Unknown result type (might be due to invalid IL or missing references)
			//IL_01b7: Unknown result type (might be due to invalid IL or missing references)
			//IL_01b8: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				Awaiter val;
				if (num == 0)
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_01ec;
				}
				_003C_003E8__1 = new _003C_003Ec__DisplayClass182_0();
				_003C_003E8__1._003C_003E4__this = _003C_003E4__this;
				_003C_003E8__1.action = action;
				gameLevelItem.HideGoodsTakeoutNewAni();
				gameLevelItem.NewTakeoutGo = GameLevelDefine.CreateGameObjectAsync("숏끜徿䜐敗&\u0082厁숦끗於氧慑$\u009a厙숇끎疼漈䥫>Ú叙숞끓斆漟摕9\u009a厙嬧二", gameLevelItem.EffectParent);
				if ((Object)(object)gameLevelItem.NewTakeoutGo != (Object)null)
				{
					gameLevelItem.NewTakeoutGo.transform.SetAsFirstSibling();
					gameLevelItem.NewTakeoutGo.SetSelfActive(active: false);
					TimeManager.GetInstance().Schedule(gameLevelItem.NewTakeoutGo, (float dt1) =>
					{
						_003C_003E8__1._003C_003E4__this.NewTakeoutGo.SetSelfActive(active: true);
					}, 0.333f, 1, 0f);
					TimeManager.GetInstance().Schedule(gameLevelItem.NewTakeoutGo, (float dt1) =>
					{
						_003C_003E8__1._003C_003E4__this.HideGoodsTakeoutNewAni();
					}, 2f, 1, 0f);
				}
				if (gameLevelItem.goodsBaseVo != null && (Object)(object)gameLevelItem.mWorkingEffect != (Object)null && Singleton<GameLevelManager>.Instance.IsShowIdleAnim(gameLevelItem.goodsBaseVo))
				{
					gameLevelItem.PlayItemIconParentShowAni(() =>
					{
						_003C_003E8__1.action?.Invoke();
						if (IGoodsBaseVo.IsCreator(_003C_003E8__1._003C_003E4__this.goodsBaseVo.type) || IGoodsBaseVo.IsConversion(_003C_003E8__1._003C_003E4__this.goodsBaseVo.type) || IGoodsBaseVo.IsInstrument(_003C_003E8__1._003C_003E4__this.goodsBaseVo.type) || IGoodsBaseVo.IsTreasureBox(_003C_003E8__1._003C_003E4__this.goodsBaseVo.type))
						{
							_003C_003E8__1._003C_003E4__this.UpdateIcon();
						}
					});
				}
				else if ((Object)(object)gameLevelItem.ProduceAnim != (Object)null)
				{
					gameLevelItem.ProduceAnim.Stop();
					gameLevelItem.ProduceAnim.PlayAnim("숇끎澼済䥽1Â叁숏끛徫猐做&\u0082厁扨o4끟c䤾㫁");
					AnimationClip clip = gameLevelItem.ProduceAnim.GetClip("숇끎澼済䥽1Â叁숏끛徫猐做&\u0082厁扨o4끟c䤾㫁");
					if ((Object)(object)clip != (Object)null && clip.length > 0f)
					{
						UniTask val2 = UniTask.Delay(TimeSpan.FromSeconds(clip.length), false, (PlayerLoopTiming)4, default(CancellationToken));
						val = val2.GetAwaiter();
						if (!val.IsCompleted)
						{
							num = (_003C_003E1__state = 0);
							_003C_003Eu__1 = val;
							_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayGoodsTakeoutNewAni_003Ed__182>(ref val, ref this);
							return;
						}
						goto IL_01ec;
					}
				}
				else
				{
					_003C_003E8__1.action?.Invoke();
				}
				goto end_IL_000e;
				IL_01ec:
				val.GetResult();
				_003C_003E8__1.action?.Invoke();
				if (IGoodsBaseVo.IsCreator(gameLevelItem.goodsBaseVo.type) || IGoodsBaseVo.IsConversion(gameLevelItem.goodsBaseVo.type) || IGoodsBaseVo.IsInstrument(gameLevelItem.goodsBaseVo.type) || IGoodsBaseVo.IsTreasureBox(gameLevelItem.goodsBaseVo.type))
				{
					gameLevelItem.UpdateIcon();
				}
				end_IL_000e:;
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003C_003E8__1 = null;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003C_003E8__1 = null;
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayItemJumpAnim_003Ed__177 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public float delay;

		public GameLevelItem _003C_003E4__this;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_0071: Unknown result type (might be due to invalid IL or missing references)
			//IL_0076: Unknown result type (might be due to invalid IL or missing references)
			//IL_007d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0035: Unknown result type (might be due to invalid IL or missing references)
			//IL_003a: Unknown result type (might be due to invalid IL or missing references)
			//IL_003e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0043: Unknown result type (might be due to invalid IL or missing references)
			//IL_0057: Unknown result type (might be due to invalid IL or missing references)
			//IL_0058: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			GameLevelItem CS_0024_003C_003E8__locals14 = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					if (!(delay > 0f))
					{
						goto IL_0093;
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayItemJumpAnim_003Ed__177>(ref val2, ref this);
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
				goto IL_0093;
				IL_0093:
				CS_0024_003C_003E8__locals14.SpeedupEffectGo = GameLevelDefine.CreateGameObjectAsync("숏끜徿猐敗&\u0082厁녰䉥㜤\0造\ud962", CS_0024_003C_003E8__locals14.EffectTopParent);
				if ((Object)(object)CS_0024_003C_003E8__locals14.SpeedupEffectGo != (Object)null)
				{
					if ((Object)(object)CS_0024_003C_003E8__locals14.ProduceAnim != (Object)null)
					{
						CS_0024_003C_003E8__locals14.ProduceAnim.Stop();
						CS_0024_003C_003E8__locals14.ProduceAnim.Play("숏끜徿焐敗&\u0082厁숚끛枷弛畝<¢厡숙끓暸愚橁\r\u009e厝녮汫㨄\0郢\ud94e");
					}
					TimeManager.Instance.Schedule(CS_0024_003C_003E8__locals14, (float t2) =>
					{
						GameLevelDefine.RecycleGameObject(CS_0024_003C_003E8__locals14.SpeedupEffectGo);
						CS_0024_003C_003E8__locals14.SpeedupEffectGo = null;
						if (IGoodsBaseVo.IsCreator(CS_0024_003C_003E8__locals14.goodsBaseVo.type) || IGoodsBaseVo.IsConversion(CS_0024_003C_003E8__locals14.goodsBaseVo.type) || IGoodsBaseVo.IsInstrument(CS_0024_003C_003E8__locals14.goodsBaseVo.type) || IGoodsBaseVo.IsTreasureBox(CS_0024_003C_003E8__locals14.goodsBaseVo.type))
						{
							CS_0024_003C_003E8__locals14.UpdateIcon();
						}
					}, 0.73f, 1);
				}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayItemShowA_003Ed__87 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		public Action action;

		public float delay;

		private _003C_003Ec__DisplayClass87_0 _003C_003E8__1;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00a1: Unknown result type (might be due to invalid IL or missing references)
			//IL_00a6: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ad: Unknown result type (might be due to invalid IL or missing references)
			//IL_0065: Unknown result type (might be due to invalid IL or missing references)
			//IL_006a: Unknown result type (might be due to invalid IL or missing references)
			//IL_006e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0073: Unknown result type (might be due to invalid IL or missing references)
			//IL_00df: Unknown result type (might be due to invalid IL or missing references)
			//IL_00e4: Unknown result type (might be due to invalid IL or missing references)
			//IL_00f1: Unknown result type (might be due to invalid IL or missing references)
			//IL_0087: Unknown result type (might be due to invalid IL or missing references)
			//IL_0088: Unknown result type (might be due to invalid IL or missing references)
			//IL_011e: Unknown result type (might be due to invalid IL or missing references)
			//IL_0125: Unknown result type (might be due to invalid IL or missing references)
			//IL_0150: Unknown result type (might be due to invalid IL or missing references)
			//IL_0157: Unknown result type (might be due to invalid IL or missing references)
			//IL_0182: Unknown result type (might be due to invalid IL or missing references)
			//IL_01ab: Unknown result type (might be due to invalid IL or missing references)
			//IL_01b5: Expected Obj, but got Unknown
			int num = _003C_003E1__state;
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					_003C_003E8__1 = new _003C_003Ec__DisplayClass87_0();
					_003C_003E8__1._003C_003E4__this = _003C_003E4__this;
					_003C_003E8__1.action = action;
					if (!(delay > 0f))
					{
						goto IL_00c3;
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayItemShowA_003Ed__87>(ref val2, ref this);
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
				goto IL_00c3;
				IL_00c3:
				if ((Object)(object)gameLevelItem.ItemIcon != (Object)null)
				{
					Vector3 localScale = ((Component)gameLevelItem.ItemIcon).transform.localScale;
					((Component)gameLevelItem.ItemIcon).transform.localScale = Vector3.zero;
					Sequence itemShowQuence = gameLevelItem.itemShowQuence;
					if (itemShowQuence != null)
					{
						TweenExtensions.Kill((Tween)(object)itemShowQuence, false);
					}
					gameLevelItem.itemShowQuence = TweenExtensions.Play<Sequence>(TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.OnComplete<Sequence>(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)gameLevelItem.ItemIcon).transform, localScale * 1.2f, 0.15f * GameConst.AnimationScale()), (Ease)6)), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)gameLevelItem.ItemIcon).transform, localScale * 0.95f, 0.15f * GameConst.AnimationScale()), (Ease)2)), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)gameLevelItem.ItemIcon).transform, localScale, 0.1f * GameConst.AnimationScale()), (Ease)1)), (TweenCallback)(() =>
					{
						_003C_003E8__1._003C_003E4__this.UpdateMaxLevel();
						_003C_003E8__1.action.InvokeGracefully();
					})), true));
				}
				else
				{
					gameLevelItem.UpdateMaxLevel();
					_003C_003E8__1.action.InvokeGracefully();
				}
			}
			catch (Exception exception)
			{
				_003C_003E1__state = -2;
				_003C_003E8__1 = null;
				_003C_003Et__builder.SetException(exception);
				return;
			}
			_003C_003E1__state = -2;
			_003C_003E8__1 = null;
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayMergeHint_003Ed__93 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		public GameGoodsVo gameGoodsVo;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00b4: Unknown result type (might be due to invalid IL or missing references)
			//IL_00b9: Unknown result type (might be due to invalid IL or missing references)
			//IL_00c0: Unknown result type (might be due to invalid IL or missing references)
			//IL_0078: Unknown result type (might be due to invalid IL or missing references)
			//IL_007d: Unknown result type (might be due to invalid IL or missing references)
			//IL_0081: Unknown result type (might be due to invalid IL or missing references)
			//IL_0086: Unknown result type (might be due to invalid IL or missing references)
			//IL_009a: Unknown result type (might be due to invalid IL or missing references)
			//IL_009b: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				Awaiter val2;
				if (num != 0)
				{
					gameLevelItem.showHintGo = true;
					if ((Object)(object)gameLevelItem.mMergeHintAnim != (Object)null && gameGoodsVo != null && gameGoodsVo.GoodsState != GameGoodsState.Lock && gameGoodsVo.GoodsState != GameGoodsState.AwaitRemove)
					{
						gameLevelItem.mMergeHintAnim.Play("숏끛皴攐䝸7Þ叝숏끳溭攐汙\r¾厽뻫");
					}
					UniTask val = UniTask.Delay(TimeSpan.FromSeconds(0.10000000149011612), false, (PlayerLoopTiming)4, default(CancellationToken));
					val2 = val.GetAwaiter();
					if (!val2.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val2;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayMergeHint_003Ed__93>(ref val2, ref this);
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
				if (gameLevelItem.showHintGo && (Object)(object)gameLevelItem.mMergeHintGo == (Object)null)
				{
					gameLevelItem.mMergeHintGo = GameLevelDefine.CreateGameObjectAsync("숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽숌끒ㆬ弍捕\rÉ又匪橥ā譽輱", gameLevelItem.EffectParent);
					if (!gameLevelItem.showHintGo)
					{
						GameLevelDefine.RecycleGameObject(gameLevelItem.mMergeHintGo);
						gameLevelItem.mMergeHintGo = null;
					}
				}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayPlusAdditional_003Ed__157 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		public string effectName;

		public int num;

		private void MoveNext()
		{
			GameLevelItem CS_0024_003C_003E8__locals9 = _003C_003E4__this;
			try
			{
				CS_0024_003C_003E8__locals9.HidePlusAdditional();
				CS_0024_003C_003E8__locals9.additionalGo = GameLevelDefine.CreateGameObjectAsync(effectName, ((Component)CS_0024_003C_003E8__locals9).transform);
				if ((Object)(object)CS_0024_003C_003E8__locals9.additionalGo != (Object)null)
				{
					((Object)CS_0024_003C_003E8__locals9.additionalGo).name = effectName;
					Text componentInChildren = CS_0024_003C_003E8__locals9.additionalGo.GetComponentInChildren<Text>();
					if ((Object)(object)componentInChildren != (Object)null)
					{
						if (num > 0)
						{
							componentInChildren.text = string.Format("勡㏗\ud983ŉ", num);
						}
						else
						{
							componentInChildren.text = string.Format("ꋞú赴", num);
						}
					}
					RTLTextMeshPro componentInChildren2 = CS_0024_003C_003E8__locals9.additionalGo.GetComponentInChildren<RTLTextMeshPro>();
					if ((Object)(object)componentInChildren2 != (Object)null)
					{
						if (num > 0)
						{
							((TMP_Text)componentInChildren2).text = string.Format("勡㏗\ud983ŉ", num);
						}
						else
						{
							((TMP_Text)componentInChildren2).text = string.Format("ꋞú赴", num);
						}
					}
					AudioManager.Instance.PlayEffect("숚끛玩弛瑘'Ò发곦÷赴");
					TimeManager.GetInstance().Schedule(CS_0024_003C_003E8__locals9, (float dt1) =>
					{
						CS_0024_003C_003E8__locals9.HidePlusAdditional();
					}, 1.1f, 1, 0f);
				}
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

	[StructLayout(LayoutKind.Auto)]
	[CompilerGenerated]
	private struct _003CPlayUndoShow_003Ed__198 : IAsyncStateMachine
	{
		public int _003C_003E1__state;

		public AsyncUniTaskMethodBuilder _003C_003Et__builder;

		public GameLevelItem _003C_003E4__this;

		public Action action;

		private Awaiter _003C_003Eu__1;

		private void MoveNext()
		{
			//IL_00b4: Unknown result type (might be due to invalid IL or missing references)
			//IL_00b9: Unknown result type (might be due to invalid IL or missing references)
			//IL_00c0: Unknown result type (might be due to invalid IL or missing references)
			//IL_007b: Unknown result type (might be due to invalid IL or missing references)
			//IL_0080: Unknown result type (might be due to invalid IL or missing references)
			//IL_0084: Unknown result type (might be due to invalid IL or missing references)
			//IL_0089: Unknown result type (might be due to invalid IL or missing references)
			//IL_005c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0061: Unknown result type (might be due to invalid IL or missing references)
			//IL_0067: Expected Obj, but got Unknown
			//IL_009d: Unknown result type (might be due to invalid IL or missing references)
			//IL_009e: Unknown result type (might be due to invalid IL or missing references)
			int num = _003C_003E1__state;
			GameLevelItem gameLevelItem = _003C_003E4__this;
			try
			{
				Awaiter val;
				if (num == 0)
				{
					val = _003C_003Eu__1;
					_003C_003Eu__1 = default;
					num = (_003C_003E1__state = -1);
					goto IL_00cf;
				}
				GameLevelItem gameLevelItem2 = _003C_003E4__this;
				Action action = this.action;
				if ((Object)(object)gameLevelItem.ProduceAnim != (Object)null)
				{
					TweenCallback val2 = _003C_003Ec._003C_003E9__198_0;
					if (val2 == null)
					{
						TweenCallback val3 = () =>
						{
							AudioManager.Instance.PlayEffect("숇끎澼瘈楫?Â叁煥_4끭r唨䧑");
						};
						_003C_003Ec._003C_003E9__198_0 = val3;
						val2 = val3;
					}
					DOVirtual.DelayedCall(0.333f, val2, true);
					UniTask val4 = gameLevelItem.PlayGoodsTakeoutNewAni(() =>
					{
						gameLevelItem2.UpdateMaxLevel();
						action.InvokeGracefully();
					});
					val = val4.GetAwaiter();
					if (!val.IsCompleted)
					{
						num = (_003C_003E1__state = 0);
						_003C_003Eu__1 = val;
						_003C_003Et__builder.AwaitUnsafeOnCompleted<Awaiter, _003CPlayUndoShow_003Ed__198>(ref val, ref this);
						return;
					}
					goto IL_00cf;
				}
				action.InvokeGracefully();
				gameLevelItem.UpdateMaxLevel();
				goto end_IL_000e;
				IL_00cf:
				val.GetResult();
				end_IL_000e:;
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

	[HideInInspector]
	public Color mBlackColor = new Color(0.67f, 0.67f, 0.67f, 1f);

	private GameGoodsVo gameGoodsVo;

	private GameLevelGrid gameLevelGrid;

	private IGoodsBaseVo goodsBaseVo;

	private GameButton mGameButton;

	private int mGoodsBackgroundType;

	private int mBingoGoodsState;

	private bool mProduceBackground;

	private bool mGlobalSpeedupState;

	[HideInInspector]
	public bool mPlayCDAnim;

	private bool mPlayFlyAnim;

	private float mCellSpace = 85f;

	private int mItemW = 1;

	private int mItemH = 1;

	private ItemCollectWidget mItemCollectWidget;

	private ItemUnlockWidget mItemUnlockWidget;

	private ItemActivityEnergyWidget mItemActivityWidget;

	private ItemUncooledWidget mItemUncooledWidget;

	private GameObject ufoSpeedSpine;

	private readonly Vector3 YINDAO_PIVOT_DEFAULT_POS = new Vector3(0f, -22.2f, 0f);

	private readonly Vector3 ITEM_ICON_DEFAULT_POS = new Vector3(0f, 22.2f, 0f);

	private Tweener mCDSpeedDotween;

	private float mDotweenCurrent;

	public bool IsPlayCdDotweenAnim;

	private ItemAdditionalWidget mAdditionalWidget;

	private bool isDownSelect;

	private float mLastClickTime;

	private Animation BubbleAnim;

	private GameLevelBubbleDiscount BubbleDiscountAnim;

	private Image BubbleIcon;

	private Sequence itemShowQuence;

	private GameObject mMergeHintGo;

	private bool showHintGo;

	private GameObject mMergeSuccessGo;

	private GameObject mMergeSuccessBottomGo;

	private GameObject mMergeSuccessTopGo;

	private GameObject _produceGo;

	private SkeletonGraphic _produceSpine;

	private TrackEntry _produceTrackEntry;

	private GameObject _produceStarGo;

	private SkeletonGraphic _produceStarSpine;

	private TrackEntry _starTrackEntry;

	private string _currentStarSpineName;

	private string _currentProudceName;

	private GameObject BoxProduceEffect;

	private string BoxProduceIdle = "숏끜徿成敗&\u0082厁숍끂瞆弎潘=â叡叕機ā讹饩";

	private Sequence flyScaleQuence;

	private Sequence flyMoveQuence;

	public Dictionary<int, List<float>> paramsDic = new Dictionary<int, List<float>>
	{
		{
			12,
			new List<float> { 0.2f, 0.45f, 0.8f, 0.45f }
		},
		{
			13,
			new List<float> { 0.4f, 0.25f, 0.6f, 0.45f }
		},
		{
			14,
			new List<float> { 0.4f, 0.25f, 0.6f, 0.45f }
		},
		{
			15,
			new List<float> { 0.4f, 0.25f, 0.6f, 0.45f }
		},
		{
			16,
			new List<float> { 0.4f, 0.25f, 0.6f, 0.45f }
		},
		{
			17,
			new List<float> { 0.4f, 0.25f, 0.6f, 0.45f }
		},
		{
			22,
			new List<float> { -0.1f, 0.35f, 0.5f, 0.35f }
		},
		{
			23,
			new List<float> { 0.2f, 0.4f, 0.5f, 0.4f }
		},
		{
			24,
			new List<float> { 0.3f, 0.42f, 0.5f, 0.45f }
		},
		{
			25,
			new List<float> { 0.1f, 0.45f, 0.6f, 0.5f }
		},
		{
			26,
			new List<float> { 0.1f, 0.45f, 0.6f, 0.5f }
		},
		{
			27,
			new List<float> { 0.1f, 0.45f, 0.6f, 0.5f }
		},
		{
			32,
			new List<float> { 0.4f, 0.1f, 0.8f, 0.4f }
		},
		{
			33,
			new List<float> { 0.25f, 0.25f, 0.6f, 0.45f }
		},
		{
			34,
			new List<float> { 0.3f, 0.4f, 0.5f, 0.3f }
		},
		{
			35,
			new List<float> { 0.283f, 0.417f, 0.477f, 0.293f }
		},
		{
			36,
			new List<float> { 0.267f, 0.433f, 0.453f, 0.287f }
		},
		{
			37,
			new List<float> { 0.25f, 0.45f, 0.43f, 0.28f }
		},
		{
			42,
			new List<float> { 0.4f, 0.1f, 0.8f, 0.365f }
		},
		{
			43,
			new List<float> { 0.35f, 0.275f, 0.625f, 0.333f }
		},
		{
			44,
			new List<float> { 0.3f, 0.45f, 0.45f, 0.3f }
		},
		{
			45,
			new List<float> { 0.283f, 0.467f, 0.43f, 0.293f }
		},
		{
			46,
			new List<float> { 0.267f, 0.483f, 0.41f, 0.287f }
		},
		{
			47,
			new List<float> { 0.25f, 0.5f, 0.39f, 0.28f }
		},
		{
			52,
			new List<float> { 0.4f, 0.1f, 0.8f, 0.33f }
		},
		{
			53,
			new List<float> { 0.35f, 0.3f, 0.6f, 0.315f }
		},
		{
			54,
			new List<float> { 0.3f, 0.5f, 0.4f, 0.3f }
		},
		{
			55,
			new List<float> { 0.283f, 0.517f, 0.383f, 0.293f }
		},
		{
			56,
			new List<float> { 0.267f, 0.533f, 0.367f, 0.287f }
		},
		{
			57,
			new List<float> { 0.25f, 0.55f, 0.35f, 0.28f }
		},
		{
			62,
			new List<float> { 0.4f, 0.1f, 0.8f, 0.265f }
		},
		{
			63,
			new List<float> { 0.35f, 0.25f, 0.65f, 0.276f }
		},
		{
			64,
			new List<float> { 0.3f, 0.4f, 0.5f, 0.288f }
		},
		{
			65,
			new List<float> { 0.279f, 0.433f, 0.443f, 0.276f }
		},
		{
			66,
			new List<float> { 0.258f, 0.467f, 0.387f, 0.267f }
		},
		{
			67,
			new List<float> { 0.238f, 0.5f, 0.33f, 0.253f }
		},
		{
			72,
			new List<float> { 0.4f, 0.1f, 0.8f, 0.2f }
		},
		{
			73,
			new List<float> { 0.35f, 0.2f, 0.7f, 0.238f }
		},
		{
			74,
			new List<float> { 0.3f, 0.3f, 0.6f, 0.275f }
		},
		{
			75,
			new List<float> { 0.275f, 0.35f, 0.503f, 0.258f }
		},
		{
			76,
			new List<float> { 0.25f, 0.4f, 0.407f, 0.242f }
		},
		{
			77,
			new List<float> { 0.225f, 0.45f, 0.31f, 0.225f }
		},
		{
			82,
			new List<float> { 0.4f, 0.1f, 0.8f, 0.213f }
		},
		{
			83,
			new List<float> { 0.35f, 0.175f, 0.65f, 0.225f }
		},
		{
			84,
			new List<float> { 0.3f, 0.25f, 0.5f, 0.238f }
		},
		{
			85,
			new List<float> { 0.271f, 0.308f, 0.435f, 0.225f }
		},
		{
			86,
			new List<float> { 0.242f, 0.367f, 0.37f, 0.213f }
		},
		{
			87,
			new List<float> { 0.213f, 0.425f, 0.305f, 0.2f }
		},
		{
			92,
			new List<float> { 0.4f, 0.1f, 0.8f, 0.225f }
		},
		{
			93,
			new List<float> { 0.35f, 0.15f, 0.6f, 0.213f }
		},
		{
			94,
			new List<float> { 0.3f, 0.2f, 0.4f, 0.2f }
		},
		{
			95,
			new List<float> { 0.267f, 0.267f, 0.367f, 0.192f }
		},
		{
			96,
			new List<float> { 0.233f, 0.333f, 0.333f, 0.183f }
		},
		{
			97,
			new List<float> { 0.2f, 0.4f, 0.3f, 0.175f }
		},
		{
			-22,
			new List<float> { 0.1f, 0.45f, 0.6f, 0.1f }
		},
		{
			-23,
			new List<float> { 0.1f, 0.45f, 0.6f, 0.12f }
		},
		{
			-24,
			new List<float> { 0.1f, 0.45f, 0.6f, 0.14f }
		},
		{
			-25,
			new List<float> { 0.1f, 0.45f, 0.6f, 0.16f }
		},
		{
			-26,
			new List<float> { 0.1f, 0.45f, 0.6f, 0.18f }
		},
		{
			-27,
			new List<float> { 0.1f, 0.45f, 0.6f, 0.2f }
		},
		{
			-32,
			new List<float> { 0.18f, 0.3f, 0.6f, 0.1f }
		},
		{
			-33,
			new List<float> { 0.165f, 0.375f, 0.55f, 0.3f }
		},
		{
			-34,
			new List<float> { 0.15f, 0.45f, 0.5f, 0.5f }
		},
		{
			-35,
			new List<float> { 0.15f, 0.45f, 0.467f, 0.383f }
		},
		{
			-36,
			new List<float> { 0.15f, 0.453f, 0.433f, 0.267f }
		},
		{
			-37,
			new List<float> { 0.15f, 0.45f, 0.4f, 0.15f }
		},
		{
			-42,
			new List<float> { 0.24f, 0.25f, 0.65f, 0.1f }
		},
		{
			-43,
			new List<float> { 0.233f, 0.313f, 0.613f, 0.225f }
		},
		{
			-44,
			new List<float> { 0.225f, 0.375f, 0.575f, 0.35f }
		},
		{
			-45,
			new List<float> { 0.225f, 0.392f, 0.55f, 0.308f }
		},
		{
			-46,
			new List<float> { 0.225f, 0.408f, 0.525f, 0.267f }
		},
		{
			-47,
			new List<float> { 0.225f, 0.425f, 0.5f, 0.225f }
		},
		{
			-52,
			new List<float> { 0.3f, 0.2f, 0.7f, 0.1f }
		},
		{
			-53,
			new List<float> { 0.3f, 0.25f, 0.675f, 0.15f }
		},
		{
			-54,
			new List<float> { 0.3f, 0.3f, 0.65f, 0.2f }
		},
		{
			-55,
			new List<float> { 0.3f, 0.333f, 0.633f, 0.233f }
		},
		{
			-56,
			new List<float> { 0.3f, 0.367f, 0.617f, 0.267f }
		},
		{
			-57,
			new List<float> { 0.3f, 0.4f, 0.6f, 0.3f }
		},
		{
			-62,
			new List<float> { 0.2f, 0.15f, 0.65f, 0.075f }
		},
		{
			-63,
			new List<float> { 0.215f, 0.263f, 0.613f, 0.125f }
		},
		{
			-64,
			new List<float> { 0.23f, 0.375f, 0.575f, 0.175f }
		},
		{
			-65,
			new List<float> { 0.228f, 0.4f, 0.55f, 0.183f }
		},
		{
			-66,
			new List<float> { 0.227f, 0.425f, 0.525f, 0.192f }
		},
		{
			-67,
			new List<float> { 0.225f, 0.45f, 0.5f, 0.2f }
		},
		{
			-72,
			new List<float> { 0.1f, 0.1f, 0.6f, 0.05f }
		},
		{
			-73,
			new List<float> { 0.13f, 0.275f, 0.55f, 0.1f }
		},
		{
			-74,
			new List<float> { 0.16f, 0.45f, 0.5f, 0.15f }
		},
		{
			-75,
			new List<float> { 0.157f, 0.467f, 0.467f, 0.133f }
		},
		{
			-76,
			new List<float> { 0.153f, 0.483f, 0.433f, 0.117f }
		},
		{
			-77,
			new List<float> { 0.15f, 0.5f, 0.4f, 0.1f }
		},
		{
			-82,
			new List<float> { 0.1f, 0.2f, 0.5f, 0.025f }
		},
		{
			-83,
			new List<float> { 0.115f, 0.313f, 0.475f, 0.063f }
		},
		{
			-84,
			new List<float> { 0.13f, 0.425f, 0.45f, 0.1f }
		},
		{
			-85,
			new List<float> { 0.128f, 0.467f, 0.433f, 0.1f }
		},
		{
			-86,
			new List<float> { 0.127f, 0.508f, 0.417f, 0.1f }
		},
		{
			-87,
			new List<float> { 0.125f, 0.55f, 0.4f, 0.1f }
		},
		{
			-92,
			new List<float> { 0.1f, 0.3f, 0.4f, 0f }
		},
		{
			-93,
			new List<float> { 0.1f, 0.35f, 0.4f, 0.025f }
		},
		{
			-94,
			new List<float> { 0.1f, 0.4f, 0.4f, 0.05f }
		},
		{
			-95,
			new List<float> { 0.1f, 0.467f, 0.4f, 0.067f }
		},
		{
			-96,
			new List<float> { 0.1f, 0.533f, 0.4f, 0.083f }
		},
		{
			-97,
			new List<float> { 0.1f, 0.6f, 0.4f, 0.1f }
		}
	};

	public static Dictionary<int, List<float>> paramsDic_2 = new Dictionary<int, List<float>>
	{
		{
			12,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			13,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			14,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			15,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			16,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			17,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			22,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			23,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			24,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			25,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			26,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			27,
			new List<float> { 0.55f, -0.34f, 0f, 0f }
		},
		{
			32,
			new List<float> { 0.55f, -0.3f, 0f, 0f }
		},
		{
			33,
			new List<float> { 0.55f, -0.3f, 0f, 0f }
		},
		{
			34,
			new List<float> { 0.55f, -0.3f, 0f, 0f }
		},
		{
			35,
			new List<float> { 0.55f, -0.3f, 0f, 0f }
		},
		{
			36,
			new List<float> { 0.55f, -0.3f, 0f, 0f }
		},
		{
			37,
			new List<float> { 0.55f, -0.3f, 0f, 0f }
		},
		{
			42,
			new List<float> { 0.55f, -0.25f, 0f, 0f }
		},
		{
			43,
			new List<float> { 0.55f, -0.25f, 0f, 0f }
		},
		{
			44,
			new List<float> { 0.55f, -0.25f, 0f, 0f }
		},
		{
			45,
			new List<float> { 0.55f, -0.25f, 0f, 0f }
		},
		{
			46,
			new List<float> { 0.55f, -0.25f, 0f, 0f }
		},
		{
			47,
			new List<float> { 0.55f, -0.25f, 0f, 0f }
		},
		{
			52,
			new List<float> { 0.45f, -0.21f, 0f, 0f }
		},
		{
			53,
			new List<float> { 0.55f, -0.21f, 0f, 0f }
		},
		{
			54,
			new List<float> { 0.55f, -0.21f, 0f, 0f }
		},
		{
			55,
			new List<float> { 0.55f, -0.21f, 0f, 0f }
		},
		{
			56,
			new List<float> { 0.55f, -0.21f, 0f, 0f }
		},
		{
			57,
			new List<float> { 0.55f, -0.21f, 0f, 0f }
		},
		{
			62,
			new List<float> { 0.35f, -0.19f, 0f, 0f }
		},
		{
			63,
			new List<float> { 0.45f, -0.19f, 0f, 0f }
		},
		{
			64,
			new List<float> { 0.55f, -0.19f, 0f, 0f }
		},
		{
			65,
			new List<float> { 0.55f, -0.19f, 0f, 0f }
		},
		{
			66,
			new List<float> { 0.55f, -0.19f, 0f, 0f }
		},
		{
			67,
			new List<float> { 0.55f, -0.19f, 0f, 0f }
		},
		{
			72,
			new List<float> { 0.25f, -0.17f, 0f, 0f }
		},
		{
			73,
			new List<float> { 0.35f, -0.17f, 0f, 0f }
		},
		{
			74,
			new List<float> { 0.45f, -0.17f, 0f, 0f }
		},
		{
			75,
			new List<float> { 0.55f, -0.17f, 0f, 0f }
		},
		{
			76,
			new List<float> { 0.55f, -0.17f, 0f, 0f }
		},
		{
			77,
			new List<float> { 0.55f, -0.17f, 0f, 0f }
		},
		{
			82,
			new List<float> { 0.15f, -0.15f, 0f, 0f }
		},
		{
			83,
			new List<float> { 0.25f, -0.15f, 0f, 0f }
		},
		{
			84,
			new List<float> { 0.35f, -0.15f, 0f, 0f }
		},
		{
			85,
			new List<float> { 0.45f, -0.15f, 0f, 0f }
		},
		{
			86,
			new List<float> { 0.55f, -0.15f, 0f, 0f }
		},
		{
			87,
			new List<float> { 0.55f, -0.15f, 0f, 0f }
		},
		{
			92,
			new List<float> { 0.05f, -0.13f, 0f, 0f }
		},
		{
			93,
			new List<float> { 0.15f, -0.13f, 0f, 0f }
		},
		{
			94,
			new List<float> { 0.25f, -0.13f, 0f, 0f }
		},
		{
			95,
			new List<float> { 0.35f, -0.13f, 0f, 0f }
		},
		{
			96,
			new List<float> { 0.45f, -0.13f, 0f, 0f }
		},
		{
			97,
			new List<float> { 0.55f, -0.13f, 0f, 0f }
		},
		{
			-22,
			new List<float> { 0f, 0f, 0.15f, -0.1f }
		},
		{
			-23,
			new List<float> { 0f, 0f, 0.2f, -0.1f }
		},
		{
			-24,
			new List<float> { 0f, 0f, 0.25f, -0.1f }
		},
		{
			-25,
			new List<float> { 0f, 0f, 0.3f, -0.1f }
		},
		{
			-26,
			new List<float> { 0f, 0f, 0.35f, -0.1f }
		},
		{
			-27,
			new List<float> { 0f, 0f, 0.4f, -0.1f }
		},
		{
			-32,
			new List<float> { 0f, 0f, 0.15f, -0.1f }
		},
		{
			-33,
			new List<float> { 0f, 0f, 0.2f, -0.1f }
		},
		{
			-34,
			new List<float> { 0f, 0f, 0.25f, -0.1f }
		},
		{
			-35,
			new List<float> { 0f, 0f, 0.3f, -0.1f }
		},
		{
			-36,
			new List<float> { 0f, 0f, 0.35f, -0.1f }
		},
		{
			-37,
			new List<float> { 0f, 0f, 0.4f, -0.1f }
		},
		{
			-42,
			new List<float> { 0f, 0f, 0.15f, -0.1f }
		},
		{
			-43,
			new List<float> { 0f, 0f, 0.2f, -0.1f }
		},
		{
			-44,
			new List<float> { 0f, 0f, 0.25f, -0.1f }
		},
		{
			-45,
			new List<float> { 0f, 0f, 0.3f, -0.1f }
		},
		{
			-46,
			new List<float> { 0f, 0f, 0.35f, -0.1f }
		},
		{
			-47,
			new List<float> { 0f, 0f, 0.4f, -0.1f }
		},
		{
			-52,
			new List<float> { 0f, 0f, 0.15f, -0.1f }
		},
		{
			-53,
			new List<float> { 0f, 0f, 0.2f, -0.1f }
		},
		{
			-54,
			new List<float> { 0f, 0f, 0.25f, -0.1f }
		},
		{
			-55,
			new List<float> { 0f, 0f, 0.3f, -0.1f }
		},
		{
			-56,
			new List<float> { 0f, 0f, 0.35f, -0.1f }
		},
		{
			-57,
			new List<float> { 0f, 0f, 0.4f, -0.1f }
		},
		{
			-62,
			new List<float> { 0f, 0f, 0.15f, -0.1f }
		},
		{
			-63,
			new List<float> { 0f, 0f, 0.2f, -0.1f }
		},
		{
			-64,
			new List<float> { 0f, 0f, 0.25f, -0.1f }
		},
		{
			-65,
			new List<float> { 0f, 0f, 0.3f, -0.1f }
		},
		{
			-66,
			new List<float> { 0f, 0f, 0.35f, -0.1f }
		},
		{
			-67,
			new List<float> { 0f, 0f, 0.4f, -0.1f }
		},
		{
			-72,
			new List<float> { 0f, 0f, 0.15f, -0.1f }
		},
		{
			-73,
			new List<float> { 0f, 0f, 0.2f, -0.1f }
		},
		{
			-74,
			new List<float> { 0f, 0f, 0.25f, -0.1f }
		},
		{
			-75,
			new List<float> { 0f, 0f, 0.3f, -0.1f }
		},
		{
			-76,
			new List<float> { 0f, 0f, 0.35f, -0.1f }
		},
		{
			-77,
			new List<float> { 0f, 0f, 0.4f, -0.1f }
		},
		{
			-82,
			new List<float> { 0f, 0f, 0.15f, -0.1f }
		},
		{
			-83,
			new List<float> { 0f, 0f, 0.2f, -0.1f }
		},
		{
			-84,
			new List<float> { 0f, 0f, 0.25f, -0.1f }
		},
		{
			-85,
			new List<float> { 0f, 0f, 0.3f, -0.1f }
		},
		{
			-86,
			new List<float> { 0f, 0f, 0.35f, -0.1f }
		},
		{
			-87,
			new List<float> { 0f, 0f, 0.4f, -0.1f }
		},
		{
			-92,
			new List<float> { 0f, 0f, 0.15f, -0.1f }
		},
		{
			-93,
			new List<float> { 0f, 0f, 0.2f, -0.1f }
		},
		{
			-94,
			new List<float> { 0f, 0f, 0.25f, -0.1f }
		},
		{
			-95,
			new List<float> { 0f, 0f, 0.3f, -0.1f }
		},
		{
			-96,
			new List<float> { 0f, 0f, 0.35f, -0.1f }
		},
		{
			-97,
			new List<float> { 0f, 0f, 0.4f, -0.1f }
		}
	};

	private Sequence ItemMoveTween;

	private Tween MergeHintTween;

	private GameObject mWorkingEffect;

	public Transform CoveredBoxBrokenParent;

	private GameObject CoveredBoxAnimGo;

	private GameObject mClearVineGo;

	private GameObject mScissorGo;

	private GameObject mScissorIdleGo;

	private GameObject additionalGo;

	private GameObject onceEffectGo;

	private GameObject MakingSpeedupGo;

	private GameObject SpeedupEffectGo;

	private GameObject TakeoutGo;

	private GameObject NewTakeoutGo;

	private Sequence _showAniSequence;

	private GameObject mDesignatedEffect;

	private GameObject mDesignatedMakeEffect;

	private Sequence goodsHintQuence;

	private GameObject mFeverFlambeEffectGo;

	private GameObject mFeverFlambeCDEffectGo;

	private GameObject mFeverRelayEffect;

	private GameObject mFeverRelayCDEffect;

	private GameObject mFeverRelayFeedbackEffect;

	public Transform ItemIconParent;

	public Image ItemIcon;

	public Animation ProduceAnim;

	public Image CoveredBoxIcon;

	public Image WebIcon;

	public GameObject BubbleIconGo;

	public Transform BubbleParent;

	public Text BubbleCDText;

	public GameObject CoolDownIconGo;

	public Text CoolDownText;

	public Image ClockIcon;

	public Image ClockIcon2;

	public Image BoxLock;

	public GameObject CoolDownBottomGo;

	public Image BottomClockIcon;

	public Image RightIcon;

	public Image BingoGoodsIcon;

	public Image CanWorkingIcon;

	public GameObject WorkingIcon;

	public GameObject WorkingComplete;

	public GameObject MaterialInNoMaking;

	public GameObject MaterialInNoOrder;

	public GameObject WorkingProgress;

	public Image WorkingProgressFill;

	public Graphic DragIcon;

	public Image MaxLevelIcon;

	public Transform EffectParent;

	public Transform EffectTopParent;

	public Transform EffectFeverParent;

	public Transform EffectFeverCDParent;

	public Transform EffectFeverRelayCDParent;

	public Animation CoolDownAnimation;

	public Animation PassiveCDAnimation;

	public Animation MakingSpeedupAnimation;

	public SkeletonGraphic CoolDownSpine;

	public Text DebugText;

	public Text CDTimeDebugText;

	public bool PlayFlyAnim => mPlayFlyAnim;

	public bool GlobalSpeedupState
	{
		get
		{
			return mGlobalSpeedupState;
		}
		set
		{
			mGlobalSpeedupState = value;
		}
	}

	private Animation mMergeHintAnim
	{
		get
		{
			if ((Object)(object)ItemIconParent != (Object)null)
			{
				return ((Component)ItemIconParent).GetComponent<Animation>();
			}
			return null;
		}
	}

	public GameGoodsVo GetGameGoodsVo => gameGoodsVo;

	private void Awake()
	{
		//IL_003b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0045: Expected Obj, but got Unknown
		GameButton component = ((Component)this).gameObject.GetComponent<GameButton>();
		if ((Object)(object)component != (Object)null)
		{
			component.EnableDefaultSound = false;
			component.onPlaySound = PlayItemClickSound;
			((UnityEvent)component.onPointerDownClick).AddListener((UnityAction)OnPointDownClick);
		}
	}

	public void Init(GameGoodsVo goodsVo, GameLevelGrid _grid)
	{
		gameGoodsVo = goodsVo;
		gameLevelGrid = _grid;
		mGameButton = ((Component)this).gameObject.GetComponent<GameButton>();
		if (gameGoodsVo == null)
		{
			Log.E("鍿\u035bꦊ\uef1e猫畂쩩\ud8b9");
		}
		else
		{
			InitItem();
		}
	}

	private void InitItem()
	{
		goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVo != null)
		{
			UpdateIcon();
		}
		else if (gameGoodsVo != null && IGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState))
		{
			UpdateSpecialIcon();
		}
	}

	private void updatePos(float newW, float newH)
	{
		//IL_0033: Unknown result type (might be due to invalid IL or missing references)
		((Component)this).transform.localPosition = new Vector3(newW / 2f - mCellSpace / 2f, mCellSpace / 2f - newH / 2f, 0f);
	}

	private void updateSize(float newW, float newH)
	{
		//IL_0013: Unknown result type (might be due to invalid IL or missing references)
		//IL_0035: Unknown result type (might be due to invalid IL or missing references)
		//IL_0057: Unknown result type (might be due to invalid IL or missing references)
		//IL_0079: Unknown result type (might be due to invalid IL or missing references)
		//IL_009e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c3: Unknown result type (might be due to invalid IL or missing references)
		RectTransform component = ((Component)this).GetComponent<RectTransform>();
		if ((Object)(object)component != (Object)null)
		{
			component.sizeDelta = new Vector2(newW, newH);
		}
		RectTransform component2 = ((Component)ProduceAnim).GetComponent<RectTransform>();
		if ((Object)(object)component2 != (Object)null)
		{
			component2.sizeDelta = new Vector2(newW, newH);
		}
		RectTransform component3 = ((Component)ItemIconParent).GetComponent<RectTransform>();
		if ((Object)(object)component3 != (Object)null)
		{
			component3.sizeDelta = new Vector2(newW, newH);
		}
		RectTransform component4 = ((Component)EffectParent).GetComponent<RectTransform>();
		if ((Object)(object)component4 != (Object)null)
		{
			component4.sizeDelta = new Vector2(newW, newH);
		}
		RectTransform component5 = ((Component)EffectTopParent).GetComponent<RectTransform>();
		if ((Object)(object)component5 != (Object)null)
		{
			component5.sizeDelta = new Vector2(newW, newH);
		}
		RectTransform component6 = ((Component)EffectFeverParent).GetComponent<RectTransform>();
		if ((Object)(object)component6 != (Object)null)
		{
			component6.sizeDelta = new Vector2(newW, newH);
		}
	}

	public void UpdateSizeAndPos()
	{
		//IL_001d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		int num = 1;
		int num2 = 1;
		if (goodsBaseVo != null)
		{
			IGoodsShapeVo shapeData = goodsBaseVo.GetShapeData();
			if (shapeData != null)
			{
				Vector2 size = shapeData.GetSize();
				num = (int)size.x;
				num2 = (int)size.y;
			}
			if (num != mItemW || num2 != mItemH)
			{
				float newW = (float)num * mCellSpace;
				float newH = (float)num2 * mCellSpace;
				updateSize(newW, newH);
				updatePos(newW, newH);
			}
		}
	}

	public void UpdateIcon(bool backgroundAnim = true)
	{
		if (mPlayFlyAnim || goodsBaseVo == null || mPlayCDAnim || GlobalSpeedupState)
		{
			return;
		}
		Reset();
		UpdateGoodsShow();
		bool flag = true;
		switch (gameGoodsVo.GoodsState)
		{
		case GameGoodsState.Lock:
			UpdateLock();
			flag = false;
			break;
		case GameGoodsState.AwaitRemove:
			UpdateLock();
			flag = false;
			break;
		case GameGoodsState.Covered:
		case GameGoodsState.FakeCovered:
		case GameGoodsState.SpecialCovered:
			UpdateCovered();
			flag = false;
			break;
		case GameGoodsState.SpecialLock:
			UpdateSpecialLock();
			flag = false;
			break;
		case GameGoodsState.Obstacle:
			UpdateObstacle();
			flag = false;
			break;
		case GameGoodsState.Bubble:
			BubbleIconGo.SetSelfActive(active: true);
			PlayBubbleIdle();
			flag = false;
			if ((Object)(object)gameLevelGrid != (Object)null)
			{
				gameLevelGrid.OnUpdateAttribute();
			}
			break;
		case GameGoodsState.InitiativeProduce:
		case GameGoodsState.HideCoolDown:
			UpdateManualProduce();
			break;
		case GameGoodsState.AutoProduce:
			UpdateAutoProduce();
			break;
		case GameGoodsState.BoxWaitOpen:
			CoolDownIconGo.SetSelfActive(active: true);
			ClockIcon.fillAmount = 0f;
			BoxLock.SetSelfActive<Image>(true);
			break;
		case GameGoodsState.CanWork:
			CanWorkingIcon.SetSelfActive<Image>(true);
			break;
		case GameGoodsState.Working:
			WorkingIcon.SetSelfActive(active: true);
			WorkingProgress.SetSelfActive(active: true);
			PlayMakingEffect();
			if ((Object)(object)gameLevelGrid != (Object)null)
			{
				gameLevelGrid.OnUpdateAttribute();
			}
			break;
		case GameGoodsState.CoolDown:
			UpdateCoolDown();
			break;
		}
		if (flag && (Object)(object)gameLevelGrid != (Object)null && !gameLevelGrid.IsLock)
		{
			mGoodsBackgroundType = gameLevelGrid.CheckInTaskGoods(gameGoodsVo.goodsID);
			if (!PlayFlyAnim)
			{
				SetItemBackground(active: true, backgroundAnim);
			}
			mBingoGoodsState = gameLevelGrid.CheckInBingoGoods(gameGoodsVo.goodsID);
			if (!PlayFlyAnim)
			{
				SetBingGoIcon(active: true);
			}
		}
		if (gameGoodsVo.MakeMaterials.Count > 0 && gameGoodsVo.GoodsState != GameGoodsState.Working && goodsBaseVo.type != 25)
		{
			if (ABTestSwitchDefine.GetCookMarkSwitch())
			{
				if (CanMakeOrderGoodsByMaterials())
				{
					MaterialInNoMaking.SetSelfActive(active: true);
				}
				else
				{
					MaterialInNoOrder.SetSelfActive(active: true);
				}
			}
			else
			{
				MaterialInNoMaking.SetSelfActive(active: true);
			}
		}
		UpdateUncooled();
		ShowGeneratorDebug();
		InitFeverFlambeEffect();
		InitFeverRelayEffect();
	}

	private void UpdateSpecialIcon()
	{
		Reset();
		switch (gameGoodsVo.GoodsState)
		{
		case GameGoodsState.Covered:
		case GameGoodsState.FakeCovered:
		case GameGoodsState.SpecialCovered:
			UpdateCovered();
			break;
		case GameGoodsState.SpecialLock:
			UpdateSpecialLock();
			break;
		case GameGoodsState.Obstacle:
			UpdateObstacle();
			break;
		}
	}

	private void UpdateGoodsShow()
	{
		if (goodsBaseVo != null)
		{
			UpdateMaxLevel();
			if (Singleton<GameLevelManager>.Instance.IsShowIdleAnim(goodsBaseVo))
			{
				PlayMakingEffect();
			}
			Singleton<GameLevelManager>.Instance.SetGoodsIcon(ItemIcon, goodsBaseVo, resLoader, original: false);
			if (GameLevelDefine.IsShowGoodsStackable(goodsBaseVo, gameGoodsVo) && gameGoodsVo.GoodsUses > 0)
			{
				showAdditionalNode(2, gameGoodsVo.GoodsUses);
			}
			if (gameGoodsVo.InitiativeAdditionalNumber > 0)
			{
				showAdditionalNode(1, gameGoodsVo.InitiativeAdditionalNumber);
			}
			if (goodsBaseVo.type == 19 && ShowActivityEnergy(goodsBaseVo))
			{
				UpdateActivityEnergy();
			}
			if (goodsBaseVo.type == 25)
			{
				UpdateCollectProgress();
			}
		}
	}

	private void UpdateMaxLevel()
	{
		if (gameGoodsVo != null && goodsBaseVo != null && goodsBaseVo.productionType == 0 && !IGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState) && Singleton<GameLevelManager>.Instance.GetGoodsBaseVoBySeriesAndLevel(goodsBaseVo.series, goodsBaseVo.level + 1) == null)
		{
			MaxLevelIcon.SetSelfActive<Image>(true);
		}
	}

	private bool CanMakeOrderGoodsByMaterials()
	{
		if (gameGoodsVo == null || goodsBaseVo == null)
		{
			return false;
		}
		if ((Object)(object)gameLevelGrid == (Object)null)
		{
			return false;
		}
		if (gameGoodsVo.MakeMaterials == null || gameGoodsVo.MakeMaterials.Count <= 0)
		{
			return false;
		}
		if (gameGoodsVo.MakingGoodsID > 0)
		{
			if (GameLevelDefine.IsOrderLackGoods(gameGoodsVo.MakingGoodsID))
			{
				return true;
			}
			if (GameLevelDefine.IsOrderLackMaterial(gameGoodsVo.MakingGoodsID))
			{
				return true;
			}
		}
		IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(goodsBaseVo.goodsID);
		if (goodsInstrumentVO == null)
		{
			return true;
		}
		List<int> makingIDsByMaterials = goodsInstrumentVO.GetMakingIDsByMaterials(gameGoodsVo.MakeMaterials);
		if (makingIDsByMaterials == null || makingIDsByMaterials.Count <= 0)
		{
			return false;
		}
		for (int i = 0; i < makingIDsByMaterials.Count; i++)
		{
			if (GameLevelDefine.IsOrderLackGoods(makingIDsByMaterials[i]))
			{
				return true;
			}
			if (GameLevelDefine.IsOrderLackMaterial(makingIDsByMaterials[i]))
			{
				return true;
			}
		}
		return false;
	}

	public void UpdateActivityEnergy(bool playAnim = false)
	{
		//IL_0053: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)mItemActivityWidget == (Object)null)
		{
			GameObject val = GameLevelDefine.CreateGameObjectSync("숇끎璼椈䥵1Ö叕숓끓断爔癱<\u009a厙숃끃斎琄材5\u009a厙", ((Component)ProduceAnim).transform);
			if ((Object)(object)val != (Object)null)
			{
				mItemActivityWidget = val.GetComponent<ItemActivityEnergyWidget>();
				((Component)mItemActivityWidget).transform.localPosition = new Vector3(0f, -30f, 0f);
			}
		}
		if (!((Object)(object)mItemActivityWidget == (Object)null))
		{
			mItemActivityWidget.UpdateEnergy(ObjectManager.GetInstance().itemDataModel.GetItemNum(1032).ToString(), playAnim);
		}
	}

	public void UpdateCollectProgress()
	{
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		if (goodsBaseVo == null)
		{
			return;
		}
		if ((Object)(object)mItemCollectWidget == (Object)null)
		{
			GameObject val = GameLevelDefine.CreateGameObjectSync("숇끎沼氈䥷=¶厵숽끙枭放敝6¢厡뻨", ((Component)ProduceAnim).transform);
			if ((Object)(object)val != (Object)null)
			{
				mItemCollectWidget = val.GetComponent<ItemCollectWidget>();
				((Component)mItemCollectWidget).transform.localPosition = new Vector3(0f, -32.5f, 0f);
			}
		}
		if ((Object)(object)mItemCollectWidget == (Object)null)
		{
			return;
		}
		List<IGoodsAutoConversionVO> autoConversionVos = GameLevelDefine.GetAutoConversionVos(goodsBaseVo.goodsID);
		if (autoConversionVos == null || autoConversionVos.Count <= 0)
		{
			return;
		}
		IGoodsAutoConversionVO goodsAutoConversionVO = autoConversionVos[0];
		if (goodsAutoConversionVO == null)
		{
			return;
		}
		int needNum = 0;
		goodsAutoConversionVO.GetMaterials().ForEach((BaseData2VO item) =>
		{
			needNum += item.num;
		});
		string progress = string.Format("类04뀯}ﱣ哕", gameGoodsVo.MakeMaterials.Count, needNum);
		if (goodsAutoConversionVO.GetMaterials().Count > 0)
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(goodsAutoConversionVO.GetMaterials()[0].id);
			if (goodsBaseVoById != null)
			{
				mItemCollectWidget.Init(goodsBaseVoById, progress, resLoader);
			}
		}
	}

	private void UpdateCovered()
	{
		//IL_008a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0094: Unknown result type (might be due to invalid IL or missing references)
		int num = 1;
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			num = gameLevelGrid.GetGridId();
		}
		ItemIcon.SetSelfActive<Image>(false);
		CoveredBoxIcon.SetSelfActive<Image>(true);
		((Component)CoveredBoxIcon).transform.setLocalPosition();
		CoveredBoxIcon.sprite = resLoader.LoadSync<Sprite>("숉끓斆爊畛$\u009a厙灥d4끢q嘬䣷" + num % 3);
		((Component)CoveredBoxIcon).transform.localScale = Vector3.one * 0.55f;
		((Graphic)CoveredBoxIcon).SetNativeSize();
	}

	private void UpdateLock()
	{
		WebIcon.SetSelfActive<Image>(true);
		((Component)WebIcon).transform.setLocalPosition();
		WebIcon.sprite = resLoader.LoadSync<Sprite>("숍끓撆猎畛=\u0096厕숉끖榶挊彟\rª厩愽䡶");
		((Graphic)WebIcon).SetNativeSize();
	}

	private void UpdateSpecialLock()
	{
		//IL_0058: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.GetGridId();
		}
		ItemIcon.SetSelfActive<Image>(false);
		CoveredBoxIcon.SetSelfActive<Image>(true);
		CoveredBoxIcon.sprite = resLoader.LoadSync<Sprite>("숉끓斆爊畛$\u009a厙숈끞徆ㄉ敛*\u0082厁");
		((Component)CoveredBoxIcon).transform.localScale = Vector3.one;
		((Graphic)CoveredBoxIcon).SetNativeSize();
	}

	private void UpdateObstacle()
	{
		//IL_003e: Unknown result type (might be due to invalid IL or missing references)
		ItemIcon.SetSelfActive<Image>(false);
		CoveredBoxIcon.SetSelfActive<Image>(true);
		CoveredBoxIcon.sprite = resLoader.LoadSync<Sprite>("숏끓璆攐畕!Ö叕수끥徾漙牝6\u0082厁摢s4끡e쩀㳍");
		((Component)CoveredBoxIcon).transform.localScale = Vector3.one;
		((Graphic)CoveredBoxIcon).SetNativeSize();
	}

	private void UpdateManualProduce()
	{
		if (goodsBaseVo == null)
		{
			return;
		}
		bool showProduceSpine = false;
		if (IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
		{
			IGoodsInstrumentVO goodsInstrumentVO = Singleton<GameLevelManager>.Instance.GetGoodsInstrumentVO(goodsBaseVo.goodsID);
			if (goodsInstrumentVO != null && goodsInstrumentVO.cost.IsNotNullAndEmpty())
			{
				showProduceSpine = true;
			}
			WorkingComplete.SetSelfActive(active: true);
		}
		else
		{
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVo.goodsID);
			if (initiativeProduceById != null && initiativeProduceById.cost.IsNotNullAndEmpty())
			{
				showProduceSpine = true;
			}
		}
		if (IGoodsBaseVo.IsTreasureBox(goodsBaseVo.type) || goodsBaseVo.type == 30)
		{
			PlayBoxProduceIdle();
		}
		else
		{
			PlayProduceIdle(showProduceSpine);
		}
	}

	private void UpdateAutoProduce()
	{
		if (goodsBaseVo == null)
		{
			return;
		}
		bool showProduceSpine = false;
		if (goodsBaseVo.type == 4 && gameGoodsVo.InitiativeSurplusNumber > 0)
		{
			IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVo.goodsID);
			if (initiativeProduceById != null && initiativeProduceById.cost.IsNotNullAndEmpty())
			{
				showProduceSpine = true;
			}
		}
		PlayProduceIdle(showProduceSpine);
	}

	private void UpdateCoolDown()
	{
		//IL_0113: Unknown result type (might be due to invalid IL or missing references)
		//IL_0197: Unknown result type (might be due to invalid IL or missing references)
		//IL_02a6: Unknown result type (might be due to invalid IL or missing references)
		if (goodsBaseVo == null)
		{
			return;
		}
		bool showProduceSpine = false;
		if (goodsBaseVo.type == 2 || goodsBaseVo.type == 3 || goodsBaseVo.type == 30)
		{
			if (gameGoodsVo.InitiativeAdditionalNumber > 0 || gameGoodsVo.UncooledDuration() > 0)
			{
				IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVo.goodsID);
				if (initiativeProduceById != null && initiativeProduceById.cost.IsNotNullAndEmpty())
				{
					showProduceSpine = true;
				}
				PlayProduceIdle(showProduceSpine);
			}
			else
			{
				CoolDownIconGo.SetSelfActive(active: true);
				IGoodsProduceVo initiativeProduceById2 = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVo.goodsID);
				if (initiativeProduceById2 != null && initiativeProduceById2.GetCDList().Count > 1 && gameGoodsVo.InitiativeCDIndex == initiativeProduceById2.GetCDList().Count - 1)
				{
					ClockIcon.sprite = resLoader.LoadSync<Sprite>("숉끓憆琊畆7\u008a厉숞끈徆挟敛\"\u0082厁核㽊");
					((Graphic)ClockIcon).SetNativeSize();
				}
				ClockIcon.fillAmount = 0f;
				((Graphic)ItemIcon).color = mBlackColor;
				_currentStarSpineName = null;
				_currentProudceName = null;
			}
		}
		else if (goodsBaseVo.type == 5 || goodsBaseVo.type == 6)
		{
			if (gameGoodsVo.InitiativeAdditionalNumber > 0 || gameGoodsVo.UncooledDuration() > 0)
			{
				PlayProduceIdle(showProduceSpine: false);
			}
			else
			{
				CoolDownBottomGo.SetSelfActive(active: true);
				BottomClockIcon.fillAmount = 0f;
				((Graphic)ItemIcon).color = mBlackColor;
				_currentStarSpineName = null;
				_currentProudceName = null;
			}
		}
		else if (goodsBaseVo.type == 4)
		{
			if (gameGoodsVo.InitiativeSurplusNumber > 0 || gameGoodsVo.InitiativeAdditionalNumber <= 0)
			{
				IGoodsProduceVo initiativeProduceById3 = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVo.goodsID);
				if (initiativeProduceById3 != null && initiativeProduceById3.cost.IsNotNullAndEmpty())
				{
					showProduceSpine = true;
				}
				PlayProduceIdle(showProduceSpine);
			}
			else
			{
				CoolDownIconGo.SetSelfActive(active: true);
				ClockIcon.fillAmount = 0f;
				_currentStarSpineName = null;
				_currentProudceName = null;
			}
			if (gameGoodsVo.PassiveSurplusNumber > 0)
			{
				PlayProduceIdle(showProduceSpine: false);
			}
			else
			{
				CoolDownBottomGo.SetSelfActive(active: true);
				BottomClockIcon.fillAmount = 0f;
				_currentStarSpineName = null;
				_currentProudceName = null;
			}
			if (gameGoodsVo.InitiativeSurplusNumber <= 0 && gameGoodsVo.PassiveSurplusNumber <= 0)
			{
				((Graphic)ItemIcon).color = mBlackColor;
			}
		}
		else if (IGoodsBaseVo.IsTreasureBox(goodsBaseVo.type))
		{
			CoolDownIconGo.SetSelfActive(active: true);
			ClockIcon.fillAmount = 0f;
			CoolDownText.SetSelfActive<Text>(true);
			_currentStarSpineName = null;
			_currentProudceName = null;
		}
		else
		{
			CoolDownIconGo.SetSelfActive(active: true);
			ClockIcon.fillAmount = 0f;
			_currentStarSpineName = null;
			_currentProudceName = null;
		}
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.OnUpdateAttribute();
		}
	}

	public void UpdateItemState(GameGoodsState goodsState)
	{
		if (goodsBaseVo != null)
		{
			if (gameGoodsVo.GoodsState != goodsState)
			{
				gameGoodsVo.GoodsState = goodsState;
				if (!mPlayCDAnim && !GlobalSpeedupState)
				{
					UpdateIcon();
				}
			}
		}
		else if (gameGoodsVo != null && gameGoodsVo.GoodsState != goodsState)
		{
			gameGoodsVo.GoodsState = goodsState;
			if (IGoodsBaseVo.CannotMerge(gameGoodsVo.GoodsState))
			{
				UpdateSpecialIcon();
			}
		}
	}

	private void UpdateUncooled()
	{
		if (gameGoodsVo == null)
		{
			return;
		}
		int buffActivityId = ObjectManager.GetInstance().goodsBuffModel.GetBuffActivityId(GoodsBuffType.Generator_No_CD, goodsBaseVo.series);
		if (gameGoodsVo.UncooledDuration() > 0 && buffActivityId != 1410 && buffActivityId != 1420 && buffActivityId != 1550 && buffActivityId != 1560 && buffActivityId != 1551 && buffActivityId != 1910)
		{
			if ((Object)(object)mItemUncooledWidget == (Object)null)
			{
				GameObject val = GameLevelDefine.CreateGameObjectSync("숇끎掼漈䥡<\u0092厑숎끖撼朏潣;\u0096厕欷㺌", ((Component)ProduceAnim).transform);
				if ((Object)(object)val != (Object)null)
				{
					mItemUncooledWidget = val.GetComponent<ItemUncooledWidget>();
					mItemUncooledWidget.LocalIdentity<ItemUncooledWidget>();
				}
			}
			if (!((Object)(object)mItemUncooledWidget == (Object)null))
			{
				mItemUncooledWidget.UpdateUncooled(gameGoodsVo.UncooledDuration());
			}
		}
		else if ((Object)(object)mItemUncooledWidget != (Object)null)
		{
			GameLevelDefine.RecycleGameObject(((Component)mItemUncooledWidget).gameObject);
			mItemUncooledWidget = null;
			UpdateIcon();
		}
	}

	public void OnUpdateUncooled(bool backgroundAnim = true)
	{
		if (gameGoodsVo != null)
		{
			if (gameGoodsVo.UncooledDuration() > 0)
			{
				UpdateUncooled();
				return;
			}
			gameGoodsVo.SetUncooledState(state: false);
			UpdateIcon(backgroundAnim);
		}
	}

	public void SetCdProgress(float progress, bool initiative, bool playClearAnim = false, float cdTime = 0f, Action endCall = null)
	{
		if (initiative)
		{
			if (mPlayCDAnim || GlobalSpeedupState)
			{
				return;
			}
			if (playClearAnim)
			{
				PlayInitiativeCDAnim(progress);
			}
			else if (goodsBaseVo.type == 3)
			{
				PlayCDDotweenAni(cdTime, endCall);
			}
			else
			{
				if (!((Behaviour)ClockIcon).enabled)
				{
					((Behaviour)ClockIcon).enabled = true;
					ClockIcon2.SetSelfActive<Image>(false);
				}
				if ((Object)(object)ClockIcon != (Object)null)
				{
					ClockIcon.fillAmount = ((progress > 1f) ? 1f : progress);
				}
			}
		}
		else
		{
			if (mPlayCDAnim || GlobalSpeedupState)
			{
				return;
			}
			if (playClearAnim)
			{
				PlayPassiveCDAnim(progress);
			}
			else if ((Object)(object)BottomClockIcon != (Object)null)
			{
				IGoodsProduceVo passiveProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(gameGoodsVo.goodsID);
				float passiveCDProgress = GameLevelDefine.GetPassiveCDProgress(gameGoodsVo, passiveProduceById);
				BottomClockIcon.fillAmount = ((passiveCDProgress > 1f) ? 1f : passiveCDProgress);
			}
		}
		SetBoxCDTime();
		SetProduceCDDebug();
	}

	public void ClearCDSpeedAnim()
	{
		if (mCDSpeedDotween != null)
		{
			TweenExtensions.Kill((Tween)(object)mCDSpeedDotween, false);
			mCDSpeedDotween = null;
		}
		mDotweenCurrent = 0f;
	}

	private void PlayCDDotweenAni(float cdTime, Action endCall)
	{
		//IL_00c7: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d1: Expected Obj, but got Unknown
		if ((Object)(object)ClockIcon2 == (Object)null || cdTime <= 0f || !((Component)ClockIcon).gameObject.activeSelf || IsPlayCdDotweenAnim)
		{
			return;
		}
		IsPlayCdDotweenAnim = true;
		if ((Object)(object)ClockIcon2 != (Object)null)
		{
			ClockIcon2.fillAmount = 0f;
		}
		if ((Object)(object)ClockIcon2 != (Object)null)
		{
			ShortcutExtensions.DOKill((Component)(object)((Component)ClockIcon2).transform, false);
		}
		((Behaviour)ClockIcon).enabled = false;
		ClockIcon2.SetSelfActive<Image>(true);
		TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFillAmount(ClockIcon2, 1f, cdTime), (Ease)1), true), (TweenCallback)(() =>
		{
			if ((Object)(object)ClockIcon2 != (Object)null)
			{
				ClockIcon2.fillAmount = 1f;
			}
			endCall?.InvokeGracefully();
		}));
	}

	public void SetCDDotweenAni()
	{
		IsPlayCdDotweenAnim = false;
		if ((Object)(object)ClockIcon2 != (Object)null)
		{
			ShortcutExtensions.DOKill((Component)(object)((Component)ClockIcon2).transform, false);
		}
		if ((Object)(object)ClockIcon2 != (Object)null)
		{
			ClockIcon2.fillAmount = 1f;
		}
		MonoSingleton<GuideWeakManager>.Instance.SetJudgeOrderMakeDelay_opt();
	}

	public void SetBoxCDTime()
	{
		if (goodsBaseVo == null || !IGoodsBaseVo.IsTreasureBox(goodsBaseVo.type))
		{
			return;
		}
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVo.goodsID);
		if (initiativeProduceById != null)
		{
			int num = initiativeProduceById.GetCDTime(gameGoodsVo.InitiativeCDIndex) - ServerTimeManager.IntervalTime(gameGoodsVo.InitiativeCDStarTime);
			if (num < 0)
			{
				num = 0;
			}
			CoolDownText.text = TimeManager.Instance.GetTimeFormatString2(num);
		}
	}

	public void SetWorkingProgress(float progress, bool playClearAnim = false)
	{
		if (!mPlayCDAnim && !GlobalSpeedupState)
		{
			if (playClearAnim)
			{
				PlayMakingSpeedupAnim(progress);
			}
			else if ((Object)(object)WorkingProgressFill != (Object)null)
			{
				WorkingProgressFill.fillAmount = progress;
			}
		}
	}

	public void SetBubbleCD(string time)
	{
		if ((Object)(object)BubbleCDText != (Object)null)
		{
			BubbleCDText.text = time;
		}
	}

	public void SetItemScaleAnim(bool show)
	{
		if ((Object)(object)mGameButton != (Object)null)
		{
			mGameButton.EnableClickScal = show;
		}
	}

	public void SetItemBackground(bool active, bool playAnim = true)
	{
		if ((Object)(object)gameLevelGrid == (Object)null)
		{
			return;
		}
		if (active)
		{
			if (mGoodsBackgroundType == 1 || mGoodsBackgroundType == 2)
			{
				RightIcon.SetSelfActive<Image>(true);
			}
			if (mGoodsBackgroundType > 0 && mGoodsBackgroundType != 999)
			{
				gameLevelGrid.SetItemBackground(1, active: true, mGoodsBackgroundType, playAnim);
			}
			if (mProduceBackground)
			{
				gameLevelGrid.SetItemBackground(2, active: true, 0, playAnim);
			}
		}
		else
		{
			RightIcon.SetSelfActive<Image>(false);
			gameLevelGrid.SetItemBackground(1, active: false, 0, playAnim);
			gameLevelGrid.SetItemBackground(2, active: false, 0, playAnim);
		}
	}

	public void SetBingGoIcon(bool active)
	{
		if ((Object)(object)gameLevelGrid == (Object)null)
		{
			return;
		}
		if (active)
		{
			if (mBingoGoodsState == 1)
			{
				BingoGoodsIcon.SetSelfActive<Image>(true);
			}
		}
		else
		{
			BingoGoodsIcon.SetSelfActive<Image>(false);
		}
	}

	public void SetPlayCDState(bool state)
	{
		mPlayCDAnim = state;
	}

	private void showAdditionalNode(int pType, int pNum)
	{
		if ((Object)(object)mAdditionalWidget == (Object)null)
		{
			GameObject val = GameLevelDefine.CreateGameObjectSync("숇끎撼椈䥵6\u0096厕숄끓垶椅瑕>b卡刖梧\ud9ccŀ", ((Component)ProduceAnim).transform);
			if ((Object)(object)val != (Object)null)
			{
				mAdditionalWidget = val.GetComponent<ItemAdditionalWidget>();
			}
		}
		if ((Object)(object)mAdditionalWidget != (Object)null)
		{
			((Component)mAdditionalWidget).gameObject.SetSelfActive(active: true);
			mAdditionalWidget.Init(pType, pNum);
		}
	}

	private void hideAdditionalNode()
	{
		if ((Object)(object)mAdditionalWidget != (Object)null)
		{
			((Component)mAdditionalWidget).gameObject.SetSelfActive(active: false);
		}
	}

	private void destroyAdditionalNode()
	{
		if ((Object)(object)mAdditionalWidget != (Object)null)
		{
			GameLevelDefine.RecycleGameObject(((Component)mAdditionalWidget).gameObject);
		}
		mAdditionalWidget = null;
	}

	public GameLevelGrid GetGameLevelGrid()
	{
		return gameLevelGrid;
	}

	public int GetBackgroundType()
	{
		return mGoodsBackgroundType;
	}

	public int GetBingoGoodsType()
	{
		return mBingoGoodsState;
	}

	public void OnItemClick()
	{
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			GameLevelManager.TryReportGoodsLockOperation(gameLevelGrid.GetGameGoodsVo(), gameLevelGrid.GetGoodsBaseVo(), gameLevelGrid.GetGridId());
		}
		float unscaledTime = Time.unscaledTime;
		if (unscaledTime - mLastClickTime < 0.2f)
		{
			mLastClickTime = 0f;
			OnItemDoubleClick();
			if (GameLevelDefine.IsBlockingClick(gameGoodsVo))
			{
				return;
			}
		}
		else
		{
			mLastClickTime = unscaledTime;
		}
		if (IGoodsBaseVo.CanSelect(gameGoodsVo.GoodsState))
		{
			if (isDownSelect)
			{
				isDownSelect = false;
				gameLevelGrid.OnSelectGrid(isProduce: false, playSelectAnim: true, isShowQuick: true);
			}
			else
			{
				gameLevelGrid.OnSelectGrid(isProduce: true, playSelectAnim: true, isShowQuick: true);
			}
			ShowGeneratorDebug();
		}
		EventManager.GetInstance().DispatchEvent(203021);
	}

	private void OnItemDoubleClick()
	{
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.OnDoubleClickGrid();
		}
	}

	private void OnPointDownClick()
	{
		if (IGoodsBaseVo.CanSelect(gameGoodsVo.GoodsState) && !gameLevelGrid.IsCurrentSelectGrid())
		{
			isDownSelect = true;
			gameLevelGrid.OnSelectGrid(isProduce: false, playSelectAnim: false);
			ShowGeneratorDebug();
		}
	}

	private void PlayItemClickSound()
	{
		if (goodsBaseVo != null)
		{
			BoardAudioHelper.Play(Singleton<ConfigManager>.Instance.Tables.TbWwiseLevelGoods.DataMap, goodsBaseVo.goodsID, EBoardAudioAction.Click);
		}
	}

	private bool ShowActivityEnergy(IGoodsBaseVo goodsBase)
	{
		return false;
	}

	public void PlayBubbleIdle()
	{
		//IL_0056: Unknown result type (might be due to invalid IL or missing references)
		//IL_0060: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a6: Unknown result type (might be due to invalid IL or missing references)
		//IL_01b0: Unknown result type (might be due to invalid IL or missing references)
		//IL_01cc: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d7: Expected Obj, but got Unknown
		bool flag = (Object)(object)BubbleAnim == (Object)null;
		if ((Object)(object)BubbleAnim == (Object)null)
		{
			GameObject val = GameLevelDefine.CreateGameObjectSync(GetBubbleAniName(), BubbleParent);
			if ((Object)(object)val != (Object)null)
			{
				BubbleAnim = val.GetComponent<Animation>();
				RectTransform component = val.GetComponent<RectTransform>();
				if ((Object)(object)component != (Object)null)
				{
					((Transform)component).localScale = Vector3.one * 1.11f;
				}
			}
			if ((Object)(object)BubbleAnim != (Object)null)
			{
				Transform val2 = ((Component)BubbleAnim).transform.Find("숋끓ㆩ⼌煛\rÉ又숋끓ㆩ⼌煛\rÉ又删犷\ud9c1Ś");
				BubbleIcon = ((Component)val2).GetComponent<Image>();
				if ((Object)(object)val2 != (Object)null && (Object)(object)BubbleIcon != (Object)null)
				{
					Singleton<GameLevelManager>.Instance.SetGoodsIcon(BubbleIcon, goodsBaseVo, resLoader, original: false);
				}
				ItemIconParent.SetSelfActive<Transform>(false);
			}
		}
		if ((Object)(object)BubbleAnim != (Object)null && gameGoodsVo.BubbleDiscount < 100 && (Object)(object)BubbleDiscountAnim == (Object)null)
		{
			Transform val3 = ((Component)BubbleAnim).transform.Find("숋끓ㆩ⼌煛\rÉ又숋끓ㆩ⼌煛\rÉ又灱i4끡qⴍ䣌");
			if ((Object)(object)val3 != (Object)null)
			{
				GameObject val4 = GameLevelDefine.CreateGameObjectSync("숏끛皴攐䝸7Þ叝숈끸斬䐉汖>\u009a厙癩s4끯w䌾仜", val3);
				if ((Object)(object)val4 != (Object)null)
				{
					BubbleDiscountAnim = val4.GetComponent<GameLevelBubbleDiscount>();
				}
				if ((Object)(object)BubbleDiscountAnim != (Object)null)
				{
					BubbleDiscountAnim.SetDiscount(gameGoodsVo.BubbleDiscount);
				}
			}
		}
		if ((Object)(object)BubbleAnim == (Object)null)
		{
			return;
		}
		if (flag)
		{
			BubbleAnim.playAutomatically = false;
			BubbleAnim.Stop();
			((Component)BubbleAnim).transform.localScale = Vector3.one * 1.11f;
			DOVirtual.DelayedCall(0.5f * GameConst.AnimationScale(), (TweenCallback)(() =>
			{
				if (!((Object)(object)BubbleAnim == (Object)null) && !BubbleAnim.isPlaying)
				{
					BubbleAnim.Play("숏끜徿焐敗&\u0082厁숅끊憸椆楫6\u008a厉녪孩㉐\0這\ud974");
				}
			}), true);
		}
		else
		{
			BubbleAnim.Stop();
			BubbleAnim.Play("숏끜徿焐敗&\u0082厁숅끊憸椆楫6\u008a厉녪孩㉐\0這\ud974");
		}
	}

	public void PlayBubbleHide()
	{
		if (gameGoodsVo.IsBubbleGoodsOpt())
		{
			gameLevelGrid.PlayBubbleHide(goodsBaseVo);
		}
	}

	public void PlayBubbleBroken()
	{
		if ((Object)(object)BubbleAnim == (Object)null)
		{
			GameObject val = GameLevelDefine.CreateGameObjectSync(GetBubbleAniName(), ((Component)this).transform);
			if ((Object)(object)val != (Object)null)
			{
				BubbleAnim = val.GetComponent<Animation>();
			}
			if (gameGoodsVo.IsBubbleGoodsOpt())
			{
				ItemIconParent.SetSelfActive<Transform>(true);
			}
		}
		if ((Object)(object)BubbleAnim == (Object)null)
		{
			return;
		}
		BubbleAnim.Stop();
		BubbleAnim.Play("숏끜徿焐敗&\u0082厁숅끊澸猆楫\"Â叁녵孩㉐\0這\ud974");
		if ((Object)(object)BubbleDiscountAnim != (Object)null)
		{
			if ((Object)(object)BubbleDiscountAnim != (Object)null)
			{
				GameLevelDefine.RecycleGameObject(((Component)BubbleDiscountAnim).gameObject);
			}
			BubbleDiscountAnim = null;
		}
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			if ((Object)(object)BubbleAnim != (Object)null)
			{
				if ((Object)(object)BubbleAnim != (Object)null)
				{
					GameLevelDefine.RecycleGameObject(((Component)BubbleAnim).gameObject);
				}
				BubbleAnim = null;
			}
		}, 1f, 1, 0f);
	}

	public void PlayItemShow(Action action = null, float delay = 0f)
	{
		//IL_0003: Unknown result type (might be due to invalid IL or missing references)
		PlayItemShowA(action, delay);
	}

	[AsyncStateMachine(typeof(_003CPlayItemShowA_003Ed__87))]
	private UniTask PlayItemShowA(Action action = null, float delay = 0f)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayItemShowA_003Ed__87 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.action = action;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayItemShowA_003Ed__87>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void PlayItemHide(Action action, float duration = 0.2f)
	{
		PlayItemHideA(action, duration);
		MaxLevelIcon.SetSelfActive<Image>(false);
	}

	private void PlayItemHideA(Action action, float duration = 0.2f)
	{
		//IL_003e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0048: Expected Obj, but got Unknown
		if ((Object)(object)ItemIcon != (Object)null)
		{
			TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOScale(((Component)ItemIcon).transform, 0f, duration * GameConst.AnimationScale()), (TweenCallback)(() =>
			{
				action.InvokeGracefully();
			}));
		}
	}

	public async void PlayGetGoodsAnim(float delay = 0f)
	{
		ItemIcon.SetSelfActive<Image>(false);
		if (delay > 0f)
		{
			await UniTask.Delay(TimeSpan.FromSeconds(delay), false, (PlayerLoopTiming)4, default(CancellationToken));
		}
		ItemIcon.SetSelfActive<Image>(true);
		if ((Object)(object)ItemIcon != (Object)null)
		{
			Vector3 endScale = ((Component)ItemIcon).transform.localScale;
			((Component)ItemIcon).transform.localScale = Vector3.zero;
			TweenSettingsExtensions.OnComplete<Tweener>(ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale * 1.2f, 0.2f * GameConst.AnimationScale()), (TweenCallback)(() =>
			{
				//IL_0011: Unknown result type (might be due to invalid IL or missing references)
				ShortcutExtensions.DOScale(((Component)ItemIcon).transform, endScale, 0.1f * GameConst.AnimationScale());
			}));
		}
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.PlayOnceEffect("숏끜徿成敗&\u0082厁숆끂撆椇潁=\u0096厕", 0.1f);
		}
	}

	[AsyncStateMachine(typeof(_003CPlayMergeHint_003Ed__93))]
	public UniTask PlayMergeHint(GameGoodsVo gameGoodsVo)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayMergeHint_003Ed__93 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.gameGoodsVo = gameGoodsVo;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayMergeHint_003Ed__93>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void PlayMergeHintHide()
	{
		showHintGo = false;
		MergeHintHideLocal("숏끛皴攐䝸7Þ叝숏끳溭攐汙\r¾厽뻫");
		GameLevelDefine.RecycleGameObject(mMergeHintGo);
		mMergeHintGo = null;
	}

	private void MergeHintHideLocal(string clipName = "")
	{
		//IL_004a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0055: Unknown result type (might be due to invalid IL or missing references)
		//IL_0061: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)mMergeHintAnim != (Object)null)
		{
			if (!clipName.IsNullOrEmpty())
			{
				mMergeHintAnim.Stop(clipName);
			}
			else
			{
				mMergeHintAnim.Stop();
			}
			Transform val = ItemIconParent.Find("숎끓德瀏祕=\u0082厁删狣\ud9c1ŀ");
			if ((Object)(object)val != (Object)null)
			{
				val.localRotation = Quaternion.identity;
				val.localScale = Vector3.one;
				val.localPosition = YINDAO_PIVOT_DEFAULT_POS;
			}
		}
	}

	public void PlayMergeAnim()
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		MergeSuccessAnimA();
	}

	[AsyncStateMachine(typeof(_003CMergeSuccessAnimA_003Ed__100))]
	private UniTask MergeSuccessAnimA()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CMergeSuccessAnimA_003Ed__100 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CMergeSuccessAnimA_003Ed__100>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CDelayRecycleEffect_003Ed__101))]
	private static UniTask DelayRecycleEffect(GameObject topGo, GameObject bottomGo)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CDelayRecycleEffect_003Ed__101 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj.topGo = topGo;
		obj.bottomGo = bottomGo;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CDelayRecycleEffect_003Ed__101>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void PlayProduceIdle(bool showProduceSpine)
	{
		//IL_00fe: Unknown result type (might be due to invalid IL or missing references)
		if (!GameLevelManager.GeneratorAnimation)
		{
			_produceGo.SetSelfActive(active: false);
			HideProduceAnim();
			return;
		}
		if (goodsBaseVo != null && IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
		{
			mProduceBackground = true;
			SetItemBackground(active: true);
		}
		EItemID eItemID = EItemID.Lightning;
		IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVo.goodsID);
		if (initiativeProduceById != null && initiativeProduceById.GetCostItemList().Count > 0)
		{
			List<ItemVO> costItemList = initiativeProduceById.GetCostItemList();
			for (int i = 0; i < costItemList.Count; i++)
			{
				eItemID = (EItemID)costItemList[i].id;
			}
		}
		string text;
		string text2;
		if (eItemID == EItemID.ActivityEnergy)
		{
			text = "녳汴ℬ\0郢\ud94e";
			text2 = "숎끈掰琏杫3\u0092厑숞끌新渟楍\r\u009a厙刘櫳\ud9cdō";
		}
		else
		{
			text = GetProduceStarName();
			text2 = GetProduceAminName();
		}
		if ((Object)(object)_produceStarGo == (Object)null)
		{
			_produceStarGo = GameLevelDefine.CreateGameObjectSync("숏끜徿朐敗&\u0082厁숃끗涼弄慀7º厹划擫\ud9dbņ", EffectTopParent);
			if ((Object)(object)_produceStarGo != (Object)null)
			{
				_produceStarGo.transform.localScale = Vector3.one;
				_produceStarSpine = _produceStarGo.GetComponentInChildren<SkeletonGraphic>();
			}
		}
		_produceStarGo.SetSelfActive(active: true);
		if (showProduceSpine)
		{
			if ((Object)(object)_produceGo == (Object)null)
			{
				CreateProduceGo();
			}
			_produceGo.SetSelfActive(active: true);
		}
		else
		{
			_produceGo.SetSelfActive(active: false);
		}
		float trackTime = 0f;
		if ((Object)(object)gameLevelGrid != (Object)null && (Object)(object)gameLevelGrid.parentLogic != (Object)null)
		{
			trackTime = gameLevelGrid.parentLogic.GetMergeRuntime();
		}
		if ((Object)(object)_produceStarSpine != (Object)null && _currentStarSpineName != text)
		{
			_currentStarSpineName = text;
			AnimationState animationState = _produceStarSpine.AnimationState;
			_starTrackEntry = ((animationState != null) ? animationState.SetAnimation(0, _currentStarSpineName, true) : null);
		}
		if (_starTrackEntry != null)
		{
			_starTrackEntry.TrackTime = trackTime;
		}
		if ((Object)(object)_produceSpine != (Object)null && _currentProudceName != text2)
		{
			_currentProudceName = text2;
			AnimationState animationState2 = _produceSpine.AnimationState;
			_produceTrackEntry = ((animationState2 != null) ? animationState2.SetAnimation(0, _currentProudceName, true) : null);
		}
		if (_produceTrackEntry != null)
		{
			_produceTrackEntry.TrackTime = trackTime;
		}
	}

	private void CreateProduceGo()
	{
		//IL_003d: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)_produceGo == (Object)null)
		{
			_produceGo = GameLevelDefine.CreateGameObjectSync("숏끜徿朐敗&\u0082厁숃끗涼弄慀7º厹癰r4끤w\udc31仍", EffectTopParent);
			if ((Object)(object)_produceGo != (Object)null)
			{
				_produceGo.transform.localScale = Vector3.one;
				_produceSpine = _produceGo.GetComponent<SkeletonGraphic>();
			}
		}
	}

	private string GetProduceAminName()
	{
		if (goodsBaseVo != null && (goodsBaseVo.type == 2 || goodsBaseVo.type == 3))
		{
			IGoodsProduceVo produceById = Singleton<GameLevelManager>.Instance.GetProduceById(goodsBaseVo.goodsID);
			if (produceById != null && produceById.doubleConsume == 1)
			{
				if (ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate() == ConsumptionRate.Eighttimes)
				{
					return "숄끒憸清獐;\u008a厉숍끟徰ㄎ彜&\u0082厁";
				}
				if (ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate() == ConsumptionRate.Fourtimes)
				{
					return "숄끒憸清獐;\u008a厉獟f4끵t긍䮙";
				}
				if (ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate() == ConsumptionRate.Double)
				{
					return "숄끒憸清獐;\u008a厉숟끞斶张彖>\u009a厙뺭";
				}
			}
		}
		return "숄끒憸清獐;\u008a厉";
	}

	private string GetProduceStarName()
	{
		if (goodsBaseVo != null && (goodsBaseVo.type == 2 || goodsBaseVo.type == 3))
		{
			IGoodsProduceVo produceById = Singleton<GameLevelManager>.Instance.GetProduceById(goodsBaseVo.goodsID);
			if (produceById != null && produceById.doubleConsume == 1)
			{
				if (ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate() == ConsumptionRate.Eighttimes)
				{
					return "수끎榸朙獫7ª厩刐拫\ud9c0ą";
				}
				if (ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate() == ConsumptionRate.Fourtimes)
				{
					return "수끎澸甙獫4Â叁\uab1aG赴";
				}
				if (ObjectManager.GetInstance().doubleConsumptionModel.GetCurrentDropRate() == ConsumptionRate.Double)
				{
					return "수끎澸甙獫6Â叁匦橬ā譽鴱";
				}
			}
		}
		return "녳汴ℬ\0郡\ud94d";
	}

	public void HideProduceAnim()
	{
		if ((Object)(object)ProduceAnim != (Object)null)
		{
			ProduceAnim.Stop();
			if ((Object)(object)((Component)ProduceAnim).GetComponent<CanvasGroup>() != (Object)null)
			{
				((Component)ProduceAnim).GetComponent<CanvasGroup>().alpha = 1f;
			}
		}
		mProduceBackground = false;
		SetItemBackground(active: false);
		_produceStarGo.SetSelfActive(active: false);
		_produceGo.SetSelfActive(active: false);
	}

	public void PlayBoxProduceIdle()
	{
		if (!GameLevelManager.GeneratorAnimation)
		{
			HideBoxProduceAnim();
			return;
		}
		if ((Object)(object)BoxProduceEffect == (Object)null)
		{
			BoxProduceEffect = GameLevelDefine.CreateGameObjectSync("숏끜徿成敗&\u0082厁숃끕枡弄慕<¢厡숏끞炵椐楫!Æ叅显䥽", EffectParent);
		}
		BoxProduceEffect.SetSelfActive(active: true);
		if ((Object)(object)ProduceAnim != (Object)null)
		{
			ProduceAnim.Stop();
			ProduceAnim.Play(BoxProduceIdle);
		}
	}

	public void HideBoxProduceAnim()
	{
		if ((Object)(object)ProduceAnim != (Object)null)
		{
			ProduceAnim.Stop();
			if ((Object)(object)((Component)ProduceAnim).GetComponent<CanvasGroup>() != (Object)null)
			{
				((Component)ProduceAnim).GetComponent<CanvasGroup>().alpha = 1f;
			}
		}
		if ((Object)(object)BoxProduceEffect != (Object)null)
		{
			BoxProduceEffect.SetSelfActive(active: false);
		}
	}

	public void PlayItemFly(Transform startTrans, float animationDuration = 0.4f, bool isPlayDownEffect = false, int dropRate = 0, int realityConsume = 1, bool makeComplete = false)
	{
		//IL_000a: Unknown result type (might be due to invalid IL or missing references)
		ItemFlyAnimA(startTrans, animationDuration, isPlayDownEffect, dropRate, realityConsume, makeComplete);
	}

	[AsyncStateMachine(typeof(_003CItemFlyAnimA_003Ed__124))]
	private UniTask ItemFlyAnimA(Transform startTrans, float animationDuration = 0.4f, bool isPlayDownEffect = false, int dropRate = 0, int realityConsume = 1, bool makeComplete = false)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		_003CItemFlyAnimA_003Ed__124 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.startTrans = startTrans;
		obj.isPlayDownEffect = isPlayDownEffect;
		obj.dropRate = dropRate;
		obj.realityConsume = realityConsume;
		obj.makeComplete = makeComplete;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CItemFlyAnimA_003Ed__124>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	private Vector3 GetPointAtDistanceFromB(Vector3 pointA, Vector3 pointB, float distanceFromB)
	{
		//IL_0000: Unknown result type (might be due to invalid IL or missing references)
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_000a: Unknown result type (might be due to invalid IL or missing references)
		//IL_000f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0010: Unknown result type (might be due to invalid IL or missing references)
		//IL_0011: Unknown result type (might be due to invalid IL or missing references)
		//IL_0013: Unknown result type (might be due to invalid IL or missing references)
		//IL_0018: Unknown result type (might be due to invalid IL or missing references)
		Vector3 val = pointA - pointB;
		Vector3 normalized = val.normalized;
		return pointB + normalized * distanceFromB;
	}

	private float GetMaxDistance()
	{
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_003e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_0045: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		//IL_0057: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		//IL_005d: Unknown result type (might be due to invalid IL or missing references)
		//IL_005e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0088: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		//IL_008c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0091: Unknown result type (might be due to invalid IL or missing references)
		//IL_0094: Unknown result type (might be due to invalid IL or missing references)
		//IL_0095: Unknown result type (might be due to invalid IL or missing references)
		//IL_0098: Unknown result type (might be due to invalid IL or missing references)
		//IL_009d: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00cd: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00df: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fa: Unknown result type (might be due to invalid IL or missing references)
		//IL_0105: Unknown result type (might be due to invalid IL or missing references)
		//IL_010b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0110: Unknown result type (might be due to invalid IL or missing references)
		//IL_0111: Unknown result type (might be due to invalid IL or missing references)
		//IL_0113: Unknown result type (might be due to invalid IL or missing references)
		//IL_0115: Unknown result type (might be due to invalid IL or missing references)
		Vector3 position = ((Component)gameLevelGrid.parentLogic.GridObjectDic[11]).transform.position;
		Vector3 position2 = ((Component)gameLevelGrid.parentLogic.GridObjectDic[97]).transform.position;
		Vector3 pointAtDistanceFromB = GetPointAtDistanceFromB(position2, position, gameLevelGrid.parentLogic.distanceB);
		float num = Vector3.Distance(position2, pointAtDistanceFromB);
		List<float> list = paramsDic[97];
		float distanceFromB = num * list[0];
		float distanceFromB2 = num * list[2];
		Vector3 pointAtDistanceFromB2 = GetPointAtDistanceFromB(position2, pointAtDistanceFromB, distanceFromB2);
		Vector3 pointAtDistanceFromB3 = GetPointAtDistanceFromB(position2, pointAtDistanceFromB, distanceFromB);
		Vector3 perpendicularPoint = GetPerpendicularPoint(position2, pointAtDistanceFromB2, list[1], Vector3.forward);
		Vector3 perpendicularPoint2 = GetPerpendicularPoint(position2, pointAtDistanceFromB3, list[3], Vector3.forward);
		float x = perpendicularPoint.x;
		float y = perpendicularPoint.y;
		float x2 = perpendicularPoint2.x;
		float y2 = perpendicularPoint2.y;
		Vector3 controlPoint = new Vector3(x, y, pointAtDistanceFromB.z);
		Vector3 controlPoint2 = new Vector3(x2, y2, pointAtDistanceFromB.z);
		Vector3[] thirdBeizerList = UIAnimationExtend.GetThirdBeizerList(position2, controlPoint, controlPoint2, pointAtDistanceFromB, 30);
		return GetPathDistance(thirdBeizerList);
	}

	private Vector3 GetPerpendicularPoint(Vector3 pointA, Vector3 pointB, float bcLength, Vector3 upVector, bool clockwise = true)
	{
		//IL_0000: Unknown result type (might be due to invalid IL or missing references)
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0009: Unknown result type (might be due to invalid IL or missing references)
		//IL_000e: Unknown result type (might be due to invalid IL or missing references)
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_0022: Unknown result type (might be due to invalid IL or missing references)
		//IL_0023: Unknown result type (might be due to invalid IL or missing references)
		//IL_0025: Unknown result type (might be due to invalid IL or missing references)
		//IL_002a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0013: Unknown result type (might be due to invalid IL or missing references)
		//IL_0014: Unknown result type (might be due to invalid IL or missing references)
		//IL_0019: Unknown result type (might be due to invalid IL or missing references)
		Vector3 val = Vector3.Cross(pointB - pointA, upVector);
		if (!clockwise)
		{
			val = -val;
		}
		val = val.normalized;
		return pointB + val * bcLength;
	}

	private float GetMinDistance()
	{
		//IL_001c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0021: Unknown result type (might be due to invalid IL or missing references)
		//IL_003e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_0045: Unknown result type (might be due to invalid IL or missing references)
		//IL_0046: Unknown result type (might be due to invalid IL or missing references)
		//IL_0057: Unknown result type (might be due to invalid IL or missing references)
		//IL_005c: Unknown result type (might be due to invalid IL or missing references)
		//IL_005d: Unknown result type (might be due to invalid IL or missing references)
		//IL_005e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0088: Unknown result type (might be due to invalid IL or missing references)
		//IL_0089: Unknown result type (might be due to invalid IL or missing references)
		//IL_008c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0091: Unknown result type (might be due to invalid IL or missing references)
		//IL_0094: Unknown result type (might be due to invalid IL or missing references)
		//IL_0095: Unknown result type (might be due to invalid IL or missing references)
		//IL_0098: Unknown result type (might be due to invalid IL or missing references)
		//IL_009d: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a1: Unknown result type (might be due to invalid IL or missing references)
		//IL_00aa: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b0: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b5: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00cd: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d6: Unknown result type (might be due to invalid IL or missing references)
		//IL_00df: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f4: Unknown result type (might be due to invalid IL or missing references)
		//IL_00fa: Unknown result type (might be due to invalid IL or missing references)
		//IL_0105: Unknown result type (might be due to invalid IL or missing references)
		//IL_010b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0110: Unknown result type (might be due to invalid IL or missing references)
		//IL_0111: Unknown result type (might be due to invalid IL or missing references)
		//IL_0113: Unknown result type (might be due to invalid IL or missing references)
		//IL_0115: Unknown result type (might be due to invalid IL or missing references)
		Vector3 position = ((Component)gameLevelGrid.parentLogic.GridObjectDic[11]).transform.position;
		Vector3 position2 = ((Component)gameLevelGrid.parentLogic.GridObjectDic[12]).transform.position;
		Vector3 pointAtDistanceFromB = GetPointAtDistanceFromB(position2, position, gameLevelGrid.parentLogic.distanceB);
		float num = Vector3.Distance(position2, pointAtDistanceFromB);
		List<float> list = paramsDic[12];
		float distanceFromB = num * list[0];
		float distanceFromB2 = num * list[2];
		Vector3 pointAtDistanceFromB2 = GetPointAtDistanceFromB(position2, pointAtDistanceFromB, distanceFromB2);
		Vector3 pointAtDistanceFromB3 = GetPointAtDistanceFromB(position2, pointAtDistanceFromB, distanceFromB);
		Vector3 perpendicularPoint = GetPerpendicularPoint(position2, pointAtDistanceFromB2, list[1], Vector3.forward);
		Vector3 perpendicularPoint2 = GetPerpendicularPoint(position2, pointAtDistanceFromB3, list[3], Vector3.forward);
		float x = perpendicularPoint.x;
		float y = perpendicularPoint.y;
		float x2 = perpendicularPoint2.x;
		float y2 = perpendicularPoint2.y;
		Vector3 controlPoint = new Vector3(x, y, pointAtDistanceFromB.z);
		Vector3 controlPoint2 = new Vector3(x2, y2, pointAtDistanceFromB.z);
		Vector3[] thirdBeizerList = UIAnimationExtend.GetThirdBeizerList(position2, controlPoint, controlPoint2, pointAtDistanceFromB, 30);
		return GetPathDistance(thirdBeizerList);
	}

	private float GetHorizontalScale(Vector3 _startPoint, Vector3 _endPoint)
	{
		//IL_0000: Unknown result type (might be due to invalid IL or missing references)
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		//IL_0006: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		return (int)(Vector2.Distance(Vector2.op_Implicit(_startPoint), Vector2.op_Implicit(_endPoint)) * 100f / GameLevelViewLogic.GridWidth) switch
		{
			0 => 0.25f, 
			1 => 0.5f, 
			_ => 1f, 
		};
	}

	private float GetPathDistance(Vector3[] path)
	{
		//IL_000f: Unknown result type (might be due to invalid IL or missing references)
		//IL_0016: Unknown result type (might be due to invalid IL or missing references)
		float num = 0f;
		for (int i = 1; i < path.Length; i++)
		{
			num += Vector3.Distance(path[i - 1], path[i]);
		}
		return num * 100f;
	}

	public void PlayItemMove(Vector3 startPos, float animationDuration = 0.4f, bool exchange = true)
	{
		//IL_0001: Unknown result type (might be due to invalid IL or missing references)
		PlayItemMoveB(startPos, animationDuration, exchange);
	}

	private void PlayItemMoveA(Vector3 startPos, float animationDuration = 0.4f)
	{
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_0085: Unknown result type (might be due to invalid IL or missing references)
		//IL_008c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0098: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00d9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e3: Expected Obj, but got Unknown
		mPlayFlyAnim = true;
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			((Component)this).transform.SetParent(((Component)gameLevelGrid).transform.parent);
		}
		else
		{
			((Component)this).transform.SetParent(((Component)gameLevelGrid.parentLogic).transform);
		}
		SetItemScaleAnim(show: false);
		SetItemBackground(active: false);
		SetBingGoIcon(active: false);
		if (DragIcon.raycastTarget)
		{
			DragIcon.raycastTarget = false;
		}
		Vector3 position = ((Component)this).transform.position;
		((Component)this).transform.position = startPos;
		((Component)this).transform.localScale = Vector3.one;
		ItemMoveTween = DOTween.Sequence();
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, position, animationDuration * GameConst.AnimationScale(), false), (Ease)7)), (TweenCallback)(() =>
		{
			//IL_001c: Unknown result type (might be due to invalid IL or missing references)
			((Component)this).transform.SetParent(gameLevelGrid.GameItemParent);
			((Component)this).transform.localPosition = Vector3.zero;
			SetItemScaleAnim(show: true);
			SetItemBackground(active: true);
			SetBingGoIcon(active: true);
			DragIcon.raycastTarget = true;
			mPlayFlyAnim = false;
			UpdateIcon();
			if (Singleton<GameLevelManager>.Instance.IsSendGetEvent)
			{
				EventManager.GetInstance().DispatchEvent(100105, -1);
				Singleton<GameLevelManager>.Instance.IsSendGetEvent = false;
			}
		})), true);
	}

	private void PlayItemMoveB(Vector3 startPos, float animationDuration = 0.4f, bool exchange = true)
	{
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_0085: Unknown result type (might be due to invalid IL or missing references)
		//IL_008c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0098: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ac: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ad: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b2: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bd: Unknown result type (might be due to invalid IL or missing references)
		//IL_00be: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00c4: Unknown result type (might be due to invalid IL or missing references)
		//IL_0107: Unknown result type (might be due to invalid IL or missing references)
		//IL_0108: Unknown result type (might be due to invalid IL or missing references)
		//IL_0109: Unknown result type (might be due to invalid IL or missing references)
		//IL_010e: Unknown result type (might be due to invalid IL or missing references)
		//IL_0111: Unknown result type (might be due to invalid IL or missing references)
		//IL_0116: Unknown result type (might be due to invalid IL or missing references)
		//IL_0119: Unknown result type (might be due to invalid IL or missing references)
		//IL_011b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0120: Unknown result type (might be due to invalid IL or missing references)
		//IL_0125: Unknown result type (might be due to invalid IL or missing references)
		//IL_0131: Unknown result type (might be due to invalid IL or missing references)
		//IL_0133: Unknown result type (might be due to invalid IL or missing references)
		//IL_0138: Unknown result type (might be due to invalid IL or missing references)
		//IL_01a3: Unknown result type (might be due to invalid IL or missing references)
		//IL_01cc: Unknown result type (might be due to invalid IL or missing references)
		//IL_0154: Unknown result type (might be due to invalid IL or missing references)
		//IL_017d: Unknown result type (might be due to invalid IL or missing references)
		//IL_01f1: Unknown result type (might be due to invalid IL or missing references)
		//IL_01fb: Expected Obj, but got Unknown
		mPlayFlyAnim = true;
		if (MonoSingleton<GuideManager>.Instance.IsInGuide())
		{
			((Component)this).transform.SetParent(((Component)gameLevelGrid).transform.parent);
		}
		else
		{
			((Component)this).transform.SetParent(gameLevelGrid.parentLogic.DragItemParent);
		}
		SetItemScaleAnim(show: false);
		SetItemBackground(active: false);
		SetBingGoIcon(active: false);
		if (DragIcon.raycastTarget)
		{
			DragIcon.raycastTarget = false;
		}
		Vector3 position = ((Component)this).transform.position;
		((Component)this).transform.position = startPos;
		((Component)this).transform.localScale = Vector3.one;
		Vector3 val = Singleton<GameLevelManager>.Instance.UICamera.WorldToScreenPoint(startPos);
		Vector3 val2 = Singleton<GameLevelManager>.Instance.UICamera.WorldToScreenPoint(position);
		float num = Vector3.Distance(val2, val);
		float num2 = num * 0.06f;
		if (num >= GameLevelViewLogic.GridWidth)
		{
			num2 *= 0.5f;
			if (num2 < 5f)
			{
				num2 = 5f;
			}
			if (num2 > 15f)
			{
				num2 = 15f;
			}
		}
		else
		{
			num2 *= 1f;
		}
		Vector3 val3 = val2 - val;
		Vector3 normalized = val3.normalized;
		Vector3 val4 = val2 + num2 * normalized;
		Vector3 val5 = Singleton<GameLevelManager>.Instance.UICamera.ScreenToWorldPoint(val4);
		ItemMoveTween = DOTween.Sequence();
		if (exchange)
		{
			TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, val5, 0.17999999f, false), GameLevelDefine.Exchange_Curve_1));
			TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, position, 0.06f, false), (Ease)4));
		}
		else
		{
			TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, val5, 0.17999999f, false), GameLevelDefine.Exchange_Curve_1));
			TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, position, 0.06f, false), (Ease)4));
		}
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(ItemMoveTween, (TweenCallback)(() =>
		{
			//IL_001c: Unknown result type (might be due to invalid IL or missing references)
			((Component)this).transform.SetParent(gameLevelGrid.GameItemParent);
			((Component)this).transform.localPosition = Vector3.zero;
			SetItemScaleAnim(show: true);
			SetBingGoIcon(active: true);
			DragIcon.raycastTarget = true;
			mPlayFlyAnim = false;
			UpdateIcon();
			SetItemBackground(active: true);
			if (Singleton<GameLevelManager>.Instance.IsSendGetEvent)
			{
				EventManager.GetInstance().DispatchEvent(100105, -1);
				Singleton<GameLevelManager>.Instance.IsSendGetEvent = false;
			}
		})), true);
	}

	public void PlayItemMoveToBottom(float animationDuration = 0.4f)
	{
		//IL_003c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		//IL_004a: Unknown result type (might be due to invalid IL or missing references)
		//IL_005a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0070: Unknown result type (might be due to invalid IL or missing references)
		//IL_007a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0085: Unknown result type (might be due to invalid IL or missing references)
		//IL_0086: Unknown result type (might be due to invalid IL or missing references)
		//IL_008b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0092: Unknown result type (might be due to invalid IL or missing references)
		//IL_009e: Unknown result type (might be due to invalid IL or missing references)
		//IL_00bf: Unknown result type (might be due to invalid IL or missing references)
		//IL_00df: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e9: Expected Obj, but got Unknown
		mPlayFlyAnim = true;
		SetItemScaleAnim(show: false);
		SetItemBackground(active: false);
		SetBingGoIcon(active: false);
		if (DragIcon.raycastTarget)
		{
			DragIcon.raycastTarget = false;
		}
		Vector3 position = ((Component)this).transform.position;
		Vector3 val = new Vector3(((Component)this).transform.localPosition.x, ((Component)this).transform.localPosition.y + 86f, ((Component)this).transform.localPosition.z);
		Vector3 position2 = ((Component)this).transform.TransformPoint(val);
		((Component)this).transform.position = position2;
		((Component)this).transform.localScale = Vector3.one;
		ItemMoveTween = DOTween.Sequence();
		TweenSettingsExtensions.SetAutoKill<Sequence>(TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.Append(ItemMoveTween, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(((Component)this).transform, position, animationDuration * GameConst.AnimationScale(), false), (Ease)7)), (TweenCallback)(() =>
		{
			//IL_0006: Unknown result type (might be due to invalid IL or missing references)
			((Component)this).transform.localPosition = Vector3.zero;
			SetItemScaleAnim(show: true);
			SetItemBackground(active: true);
			SetBingGoIcon(active: true);
			DragIcon.raycastTarget = true;
			mPlayFlyAnim = false;
		})), true);
	}

	public void PlayMergeHintEffect(Transform targetTrans)
	{
		HideMergeHintEffect();
		if ((Object)(object)GetGameLevelGrid() != (Object)null)
		{
			if (gameGoodsVo.GoodsState == GameGoodsState.Lock || gameGoodsVo.GoodsState == GameGoodsState.AwaitRemove)
			{
				MergeHintTween = DOTweenUITools.DoSelfScaleAnimation(ItemIconParent);
			}
			else
			{
				MergeHintTween = DOTweenUITools.DoInterattractionAnimation(ItemIconParent, targetTrans);
			}
		}
	}

	public void HideMergeHintEffect()
	{
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_002a: Unknown result type (might be due to invalid IL or missing references)
		if (MergeHintTween != null)
		{
			TweenExtensions.Kill(MergeHintTween, false);
		}
		ItemIconParent.localPosition = Vector3.zero;
		ItemIconParent.localScale = Vector3.one;
	}

	public void PlayMakingEffect()
	{
		if (goodsBaseVo == null)
		{
			return;
		}
		if (!GameLevelManager.MachineAnimation)
		{
			HideMakingEffect();
		}
		else
		{
			if (!((Object)(object)mWorkingEffect == (Object)null))
			{
				return;
			}
			bool flag = false;
			GameObject val = resLoader.LoadSync<GameObject>(goodsBaseVo.GetIcon() + "숌끟璿弍彑1Ö叕扲e4끬c䌱㫍");
			if ((Object)(object)val != (Object)null)
			{
				ItemIcon.SetSelfActive<Image>(false);
				flag = true;
			}
			else
			{
				val = resLoader.LoadSync<GameObject>(goodsBaseVo.GetIcon() + "晟e4끦g報㻜");
			}
			if (!((Object)(object)val == (Object)null))
			{
				mWorkingEffect = Object.Instantiate<GameObject>(val);
				if (flag)
				{
					mWorkingEffect.transform.SetParent(EffectParent);
				}
				else
				{
					mWorkingEffect.transform.SetParent(((Component)this).transform);
				}
				mWorkingEffect.SetSelfActive(active: true);
				mWorkingEffect.transform.LocalIdentity<Transform>();
			}
		}
	}

	public void HideMakingEffect()
	{
		if ((Object)(object)mWorkingEffect != (Object)null)
		{
			Object.Destroy((Object)(object)mWorkingEffect);
			mWorkingEffect = null;
		}
		ItemIcon.SetSelfActive<Image>(true);
	}

	public void PlayCoveredBroken()
	{
		CoveredBoxIcon.SetSelfActive<Image>(false);
		if ((Object)(object)CoveredBoxAnimGo != (Object)null)
		{
			HideCoveredBroken();
		}
		CoveredBoxAnimGo = GameLevelDefine.CreateGameObjectSync("숏끕撯䈐䍆7\u0096厕수끂斛渙潛9\u009a厙녅塦㘢\0逤\ud97c", CoveredBoxBrokenParent);
		if ((Object)(object)CoveredBoxAnimGo == (Object)null)
		{
			return;
		}
		Image component = CoveredBoxAnimGo.GetComponent<Image>();
		if ((Object)(object)component != (Object)null)
		{
			component.sprite = CoveredBoxIcon.sprite;
			((Graphic)component).SetNativeSize();
		}
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			if (gameGoodsVo != null && gameGoodsVo.GoodsState == GameGoodsState.SpecialLock)
			{
				SetUnlockWidget();
				if ((Object)(object)mItemUnlockWidget != (Object)null)
				{
					mItemUnlockWidget.SetSelfActive<ItemUnlockWidget>(true);
				}
			}
		}, 0.8f, 1, 0f);
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			HideCoveredBroken();
		}, 1.5f, 1, 0f);
	}

	public void HideCoveredBroken()
	{
		GameLevelDefine.RecycleGameObject(CoveredBoxAnimGo);
		CoveredBoxAnimGo = null;
		if (!((Object)(object)CoveredBoxIcon != (Object)null))
		{
			return;
		}
		if (gameGoodsVo != null && gameGoodsVo.GoodsState == GameGoodsState.SpecialLock)
		{
			CoveredBoxIcon.SetSelfActive<Image>(true);
			SetUnlockWidget();
			if ((Object)(object)mItemUnlockWidget != (Object)null)
			{
				mItemUnlockWidget.SetSelfActive<ItemUnlockWidget>(true);
			}
		}
		else
		{
			CoveredBoxIcon.SetSelfActive<Image>(false);
		}
	}

	public void PlayClearVineAnim()
	{
		EventManager.GetInstance().DispatchEvent<Action<Transform>>(100251, StartClearVineAnim);
	}

	private void StartClearVineAnim(Transform targetTrans)
	{
		//IL_00ca: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e9: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
		//IL_00f3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ff: Unknown result type (might be due to invalid IL or missing references)
		//IL_0118: Unknown result type (might be due to invalid IL or missing references)
		//IL_0122: Expected Obj, but got Unknown
		//IL_00b4: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)mClearVineGo != (Object)null || (Object)(object)mScissorGo != (Object)null)
		{
			HideClearVineAnim();
		}
		if ((Object)(object)targetTrans == (Object)null)
		{
			return;
		}
		mScissorGo = GameLevelDefine.CreateGameObjectSync("숞끛循猟救 \u0082厁숙끓循攚捛 \u0082厁匢橦ā讍鵴", CoveredBoxBrokenParent);
		if ((Object)(object)mScissorGo == (Object)null)
		{
			return;
		}
		mClearVineGo = GameLevelDefine.CreateGameObjectSync("숞끛循瘟救 \u0082厁숵끔暼收楑4\u009e厝由㲌", CoveredBoxBrokenParent);
		if ((Object)(object)mItemUnlockWidget != (Object)null)
		{
			mItemUnlockWidget.SetSelfActive<ItemUnlockWidget>(true);
			mItemUnlockWidget.PlayAlphaAni();
		}
		if ((Object)(object)mClearVineGo != (Object)null)
		{
			mClearVineGo.transform.localPosition = new Vector3(0f, -6f, 0f);
		}
		mScissorGo.transform.position = targetTrans.position;
		Vector3 val = CoveredBoxBrokenParent.TransformPoint(new Vector3(-43f, 43f, 0f));
		TweenSettingsExtensions.OnComplete<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(mScissorGo.transform, val, 0.733f, false), (Ease)4), (TweenCallback)(() =>
		{
			//IL_0027: Unknown result type (might be due to invalid IL or missing references)
			//IL_002c: Unknown result type (might be due to invalid IL or missing references)
			//IL_0031: Unknown result type (might be due to invalid IL or missing references)
			//IL_003d: Unknown result type (might be due to invalid IL or missing references)
			ShortcutExtensions.DOKill((Component)(object)mScissorGo.transform, false);
			Vector3 val2 = CoveredBoxBrokenParent.TransformPoint(new Vector3(43f, -43f, 0f));
			TweenSettingsExtensions.SetAutoKill<Tweener>(TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOMove(mScissorGo.transform, val2, 0.633f, false), (Ease)4), true);
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				AudioManager.GetInstance().PlayEffect("숋끥於爌摇&\u009a厙刦碷\ud9f7ŀ");
			}, 0.2f, 1);
		}));
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			HideClearVineAnim();
		}, 1.8f, 1, 0f);
	}

	public void HideClearVineAnim()
	{
		if ((Object)(object)mClearVineGo != (Object)null)
		{
			Object.Destroy((Object)(object)mClearVineGo);
		}
		if ((Object)(object)mScissorGo != (Object)null)
		{
			Object.Destroy((Object)(object)mScissorGo);
		}
		mClearVineGo = null;
		mScissorGo = null;
		if ((Object)(object)mItemUnlockWidget != (Object)null)
		{
			GameLevelDefine.RecycleGameObject(((Component)mItemUnlockWidget).gameObject);
		}
		mItemUnlockWidget = null;
	}

	public void PlayScissorIdle()
	{
		SetUnlockWidget();
		if (!((Object)(object)mItemUnlockWidget == (Object)null))
		{
			if ((Object)(object)mScissorIdleGo == (Object)null)
			{
				mScissorIdleGo = GameLevelDefine.CreateGameObjectSync("숞끛厪挟䕑 R卑숅끉撪氆楆\u001b\u0096厕뻹", ((Component)mItemUnlockWidget).transform);
			}
			mItemUnlockWidget.SetGoodsIconActive(active: false);
		}
	}

	public void HideScissorIdle()
	{
		if ((Object)(object)mScissorIdleGo != (Object)null)
		{
			Object.Destroy((Object)(object)mScissorIdleGo);
			mScissorIdleGo = null;
		}
		if ((Object)(object)mItemUnlockWidget != (Object)null)
		{
			mItemUnlockWidget.SetGoodsIconActive(active: true);
		}
	}

	public void PlayPropHintEffect(int propType)
	{
		if (!((Object)(object)GetGameLevelGrid() != (Object)null))
		{
			return;
		}
		if ((Object)(object)_produceSpine == (Object)null)
		{
			CreateProduceGo();
		}
		if ((Object)(object)_produceSpine == (Object)null)
		{
			return;
		}
		_produceSpine.SetSelfActive<SkeletonGraphic>(true);
		switch (propType)
		{
		case 1:
		{
			AnimationState animationState4 = _produceSpine.AnimationState;
			if (animationState4 != null)
			{
				animationState4.SetAnimation(0, "숎끕炶氏杇\rÆ叅嬧事", true);
			}
			break;
		}
		case 2:
		{
			AnimationState animationState2 = _produceSpine.AnimationState;
			if (animationState2 != null)
			{
				animationState2.SetAnimation(0, "숎끕玶瀏杇\rÒ发뗕\u009f赴", true);
			}
			break;
		}
		case 3:
		{
			AnimationState animationState3 = _produceSpine.AnimationState;
			if (animationState3 != null)
			{
				animationState3.SetAnimation(0, "숎끕掶漏杇\r\u0092厑搤䮁", true);
			}
			break;
		}
		case 4:
		{
			AnimationState animationState = _produceSpine.AnimationState;
			if (animationState != null)
			{
				animationState.SetAnimation(0, "숎끕疶瀏杇\rÚ叙匣橲ā讑饥", true);
			}
			break;
		}
		}
	}

	public void HidePropHintEffect()
	{
		_currentProudceName = null;
	}

	[AsyncStateMachine(typeof(_003CPlayPlusAdditional_003Ed__157))]
	public UniTask PlayPlusAdditional(int num, string effectName = "effect_cika_1")
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0041: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayPlusAdditional_003Ed__157 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.num = num;
		obj.effectName = effectName;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayPlusAdditional_003Ed__157>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void HidePlusAdditional()
	{
		GameLevelDefine.RecycleGameObject(additionalGo);
		additionalGo = null;
	}

	public async void PlayOnceAnim(string effectName, string audioName = "", float delay = 1.1f, Action callback = null)
	{
		HideOnceAnim();
		onceEffectGo = GameLevelDefine.CreateGameObjectAsync(effectName, ((Component)this).transform);
		if (!((Object)(object)onceEffectGo != (Object)null))
		{
			return;
		}
		if (effectName == "숏끜徿瀐敗&\u0082厁숵끕溩收牓7¾厽숅끛憭挆牆\r\u008a厉숏끟璵漐捆3Ö叕뻮")
		{
			SkeletonGraphic componentInChildren = onceEffectGo.GetComponentInChildren<SkeletonGraphic>();
			if ((Object)(object)componentInChildren != (Object)null)
			{
				AnimationState animationState = componentInChildren.AnimationState;
				if (animationState != null)
				{
					animationState.SetAnimation(0, "删犛\ud9dbŃ", false);
				}
			}
		}
		if (audioName.IsNotNullAndEmpty())
		{
			AudioManager.Instance.PlayEffect(audioName);
		}
		TimeManager.GetInstance().Schedule(this, (float dt1) =>
		{
			HideOnceAnim();
			callback.InvokeGracefully();
		}, delay, 1);
	}

	public void HideOnceAnim()
	{
		GameLevelDefine.RecycleGameObject(onceEffectGo);
		onceEffectGo = null;
	}

	public void PlayGlobalSpeedupAnim(float progress, bool isPassive)
	{
		if (goodsBaseVo != null && !mPlayCDAnim)
		{
			if (IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
			{
				PlayMakingSpeedupAnim(progress);
			}
			else if (isPassive)
			{
				PlayPassiveCDAnim(progress);
			}
			else
			{
				PlayInitiativeCDAnim(progress);
			}
		}
	}

	public void PlayUFOSpeedupAnim(float progress, bool isPassive)
	{
		if (goodsBaseVo != null && !mPlayCDAnim && !IGoodsBaseVo.IsInstrument(goodsBaseVo.type))
		{
			if (isPassive)
			{
				PlayPassiveCDUFOAnim(progress);
			}
			else
			{
				PlayInitiativeCDUFOAnim(progress);
			}
		}
	}

	private void PlayInitiativeCDAnim(float progress)
	{
		Singleton<GameLevelManager>.Instance.PlayAudio(10);
		float duration = 0f;
		float animHideTime = 0f;
		float animCompleteTime = 0f;
		if ((Object)(object)CoolDownAnimation != (Object)null && (Object)(object)CoolDownSpine != (Object)null)
		{
			mPlayCDAnim = true;
			AnimationClip clip = CoolDownAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숂끥循愃灛%\u0082厁显䥱");
			if ((Object)(object)clip != (Object)null)
			{
				duration = clip.length;
			}
			clip = CoolDownAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숋끥疿椌灚:Ú叙刟熿\ud9f7ŝ");
			if ((Object)(object)clip != (Object)null)
			{
				animHideTime = clip.length;
			}
			clip = CoolDownAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숅끥沺攆灙\"¶厵녴孥㉐\0這\ud974");
			if ((Object)(object)clip != (Object)null)
			{
				animCompleteTime = clip.length;
			}
			CoolDownAnimation.Stop();
			CoolDownAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숂끥循愃灛%\u0082厁显䥱");
			CoolDownSpine.SetSelfActive<SkeletonGraphic>(true);
			if (CoolDownSpine.AnimationState != null)
			{
				CoolDownSpine.AnimationState.SetAnimation(0, "删犛\ud9dbŃ", false);
			}
			if (progress < 1f)
			{
				AudioManager.Instance.PlayEffect("숆끞犺弇捑3Î反듲\u009f赴");
			}
			TimeManager.Instance.Schedule(this, (float show) =>
			{
				if (progress >= 1f)
				{
					if ((Object)(object)ClockIcon != (Object)null)
					{
						ClockIcon.fillAmount = 1f;
					}
					if ((Object)(object)CoolDownAnimation != (Object)null)
					{
						CoolDownAnimation.Stop();
						CoolDownAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숅끥沺攆灙\"¶厵녴孥㉐\0這\ud974");
					}
					TimeManager.Instance.Schedule(this, (float complete) =>
					{
						mPlayCDAnim = false;
						UpdateIcon();
					}, animCompleteTime, 1);
				}
				else
				{
					if ((Object)(object)ClockIcon != (Object)null)
					{
						ClockIcon.fillAmount = progress;
					}
					if ((Object)(object)CoolDownAnimation != (Object)null)
					{
						CoolDownAnimation.Stop();
						CoolDownAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숋끥疿椌灚:Ú叙刟熿\ud9f7ŝ");
					}
					TimeManager.Instance.Schedule(this, (float hide) =>
					{
						mPlayCDAnim = false;
						UpdateIcon();
					}, animHideTime, 1);
				}
			}, duration, 1);
		}
		else if ((Object)(object)ClockIcon != (Object)null)
		{
			ClockIcon.fillAmount = ((progress > 1f) ? 1f : progress);
		}
	}

	private void PlayPassiveCDAnim(float progress)
	{
		Singleton<GameLevelManager>.Instance.PlayAudio(10);
		float duration = 0f;
		float animHideTime = 0f;
		float animCompleteTime = 0f;
		if ((Object)(object)PassiveCDAnimation != (Object)null && (Object)(object)CoolDownSpine != (Object)null)
		{
			mPlayCDAnim = true;
			AnimationClip clip = PassiveCDAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎梶漈瑫!¦厥匓機ā讹饩");
			if ((Object)(object)clip != (Object)null)
			{
				duration = clip.length;
			}
			clip = PassiveCDAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎憶済瑫4\u008a厉扨u4끟c䀾㫁");
			if ((Object)(object)clip != (Object)null)
			{
				animHideTime = clip.length;
			}
			clip = PassiveCDAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎澶洈瑫1Â叁숞끖憼渟灑\r\u008a厉뻵");
			if ((Object)(object)clip != (Object)null)
			{
				animCompleteTime = clip.length;
			}
			PassiveCDAnimation.Stop();
			PassiveCDAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎梶漈瑫!¦厥匓機ā讹饩");
			CoolDownSpine.SetSelfActive<SkeletonGraphic>(true);
			CoolDownSpine.AnimationState.SetAnimation(0, "删犛\ud9dbŃ", false);
			if (progress < 1f)
			{
				AudioManager.Instance.PlayEffect("숆끞犺弇捑3Î反듲\u009f赴");
			}
			TimeManager.Instance.Schedule(this, (float show) =>
			{
				if (progress >= 1f)
				{
					if ((Object)(object)BottomClockIcon != (Object)null)
					{
						BottomClockIcon.fillAmount = 1f;
					}
					PassiveCDAnimation.Stop();
					PassiveCDAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎澶洈瑫1Â叁숞끖憼渟灑\r\u008a厉뻵");
					TimeManager.Instance.Schedule(this, (float complete) =>
					{
						mPlayCDAnim = false;
						UpdateIcon();
					}, animCompleteTime, 1);
				}
				else
				{
					if ((Object)(object)BottomClockIcon != (Object)null)
					{
						BottomClockIcon.fillAmount = progress;
					}
					PassiveCDAnimation.Stop();
					PassiveCDAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎憶済瑫4\u008a厉扨u4끟c䀾㫁");
					TimeManager.Instance.Schedule(this, (float hide) =>
					{
						mPlayCDAnim = false;
						UpdateIcon();
					}, animHideTime, 1);
				}
			}, duration, 1);
		}
		else if ((Object)(object)BottomClockIcon != (Object)null)
		{
			BottomClockIcon.fillAmount = ((progress > 1f) ? 1f : progress);
		}
	}

	private void PlayInitiativeCDUFOAnim(float progress)
	{
		Singleton<GameLevelManager>.Instance.PlayAudio(10);
		float duration = 0f;
		float animHideTime = 0f;
		float animCompleteTime = 0f;
		if ((Object)(object)CoolDownAnimation != (Object)null && (Object)(object)CoolDownSpine != (Object)null)
		{
			mPlayCDAnim = true;
			AnimationClip clip = CoolDownAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숂끥循愃灛%\u0082厁显䥱");
			if ((Object)(object)clip != (Object)null)
			{
				duration = clip.length;
			}
			clip = CoolDownAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숋끥疿椌灚:Ú叙刟熿\ud9f7ŝ");
			if ((Object)(object)clip != (Object)null)
			{
				animHideTime = clip.length;
			}
			clip = CoolDownAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숅끥沺攆灙\"¶厵녴孥㉐\0這\ud974");
			if ((Object)(object)clip != (Object)null)
			{
				animCompleteTime = clip.length;
			}
			CoolDownAnimation.Stop();
			CoolDownAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숂끥循愃灛%\u0082厁显䥱");
			TimeManager.Instance.Schedule(this, (float show) =>
			{
				ufoSpeedSpine = Object.Instantiate<GameObject>(resLoader.LoadSync<GameObject>("숭끟斮爮乑<\u009a厙수끎碶弙慫4æ句숂끟枺攃牕 ¢厡"));
				if ((Object)(object)ufoSpeedSpine != (Object)null)
				{
					ufoSpeedSpine.transform.SetParent(((Component)ProduceAnim).gameObject.transform, false);
				}
			}, 0.3f, 1);
			if (progress < 1f)
			{
				AudioManager.Instance.PlayEffect("숆끞犺弇捑3Î反듲\u009f赴");
			}
			TimeManager.Instance.Schedule(this, (float show) =>
			{
				if (progress >= 1f)
				{
					if ((Object)(object)ClockIcon != (Object)null)
					{
						ClockIcon.fillAmount = 1f;
					}
					if ((Object)(object)CoolDownAnimation != (Object)null)
					{
						CoolDownAnimation.Stop();
						CoolDownAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숅끥沺攆灙\"¶厵녴孥㉐\0這\ud974");
					}
					TimeManager.Instance.Schedule(this, (float complete) =>
					{
						mPlayCDAnim = false;
						UpdateIcon();
					}, animCompleteTime + 0.1f, 1);
				}
				else
				{
					if ((Object)(object)ClockIcon != (Object)null)
					{
						ClockIcon.fillAmount = progress;
					}
					if ((Object)(object)CoolDownAnimation != (Object)null)
					{
						CoolDownAnimation.Stop();
						CoolDownAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖咝漆潃<V单숋끥疿椌灚:Ú叙刟熿\ud9f7ŝ");
					}
					TimeManager.Instance.Schedule(this, (float hide) =>
					{
						mPlayCDAnim = false;
						UpdateIcon();
					}, animHideTime, 1);
				}
			}, duration, 1);
		}
		else if ((Object)(object)ClockIcon != (Object)null)
		{
			ClockIcon.fillAmount = ((progress > 1f) ? 1f : progress);
		}
	}

	private void PlayPassiveCDUFOAnim(float progress)
	{
		Singleton<GameLevelManager>.Instance.PlayAudio(10);
		float duration = 0f;
		float animHideTime = 0f;
		float animCompleteTime = 0f;
		if ((Object)(object)PassiveCDAnimation != (Object)null && (Object)(object)CoolDownSpine != (Object)null)
		{
			mPlayCDAnim = true;
			AnimationClip clip = PassiveCDAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎梶漈瑫!¦厥匓機ā讹饩");
			if ((Object)(object)clip != (Object)null)
			{
				duration = clip.length;
			}
			clip = PassiveCDAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎憶済瑫4\u008a厉扨u4끟c䀾㫁");
			if ((Object)(object)clip != (Object)null)
			{
				animHideTime = clip.length;
			}
			clip = PassiveCDAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎澶洈瑫1Â叁숞끖憼渟灑\r\u008a厉뻵");
			if ((Object)(object)clip != (Object)null)
			{
				animCompleteTime = clip.length;
			}
			PassiveCDAnimation.Stop();
			PassiveCDAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎梶漈瑫!¦厥匓機ā讹饩");
			TimeManager.Instance.Schedule(this, (float show) =>
			{
				ufoSpeedSpine = Object.Instantiate<GameObject>(resLoader.LoadSync<GameObject>("숭끟斮爮乑<\u009a厙수끎碶弙慫4æ句숂끟枺攃牕 ¢厡"));
				if ((Object)(object)ufoSpeedSpine != (Object)null)
				{
					ufoSpeedSpine.transform.SetParent(((Component)ProduceAnim).gameObject.transform, false);
				}
			}, 0.3f, 1);
			if (progress < 1f)
			{
				AudioManager.Instance.PlayEffect("숆끞犺弇捑3Î反듲\u009f赴");
			}
			TimeManager.Instance.Schedule(this, (float show) =>
			{
				if (progress >= 1f)
				{
					if ((Object)(object)BottomClockIcon != (Object)null)
					{
						BottomClockIcon.fillAmount = 1f;
					}
					PassiveCDAnimation.Stop();
					PassiveCDAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎澶洈瑫1Â叁숞끖憼渟灑\r\u008a厉뻵");
					TimeManager.Instance.Schedule(this, (float complete) =>
					{
						mPlayCDAnim = false;
						UpdateIcon();
					}, animCompleteTime + 0.1f, 1);
				}
				else
				{
					if ((Object)(object)BottomClockIcon != (Object)null)
					{
						BottomClockIcon.fillAmount = progress;
					}
					PassiveCDAnimation.Stop();
					PassiveCDAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䎭漐汙\r\u0012匑숅끖䊝漆潃<\u000e匍숇끎憶済瑫4\u008a厉扨u4끟c䀾㫁");
					TimeManager.Instance.Schedule(this, (float hide) =>
					{
						mPlayCDAnim = false;
						UpdateIcon();
					}, animHideTime, 1);
				}
			}, duration, 1);
		}
		else if ((Object)(object)BottomClockIcon != (Object)null)
		{
			BottomClockIcon.fillAmount = ((progress > 1f) ? 1f : progress);
		}
	}

	private string GetMachineCompleteEffectName()
	{
		string result = "숏끜徿焐䕗&\u0082厁숏끂榰愐楫8ª厩攡䲍";
		if (gameGoodsVo == null)
		{
			return result;
		}
		if (gameGoodsVo.DoneType == "숁끕状攂捫4Î反럢Ó赴")
		{
			result = ObjectManager.Instance.cookFrenzyModel.GetCompleteMachineEffect();
		}
		return result;
	}

	private string GetMachineCompleteAnimationName()
	{
		string result = "숏끛皴攐䝸7Þ叝숏끳䶭愐汙\r:匹숄끒现栅捑\rÒ发녯孷㉐\0這\ud974";
		if (gameGoodsVo == null)
		{
			return result;
		}
		if (gameGoodsVo.DoneType == "숁끕状攂捫4Î反럢Ó赴")
		{
			result = ObjectManager.Instance.cookFrenzyModel.GetCompleteMachineAnimation();
		}
		return result;
	}

	private bool GetIsShowCanWorkingIcon()
	{
		if (gameGoodsVo == null)
		{
			return true;
		}
		if (gameGoodsVo.DoneType == "숁끕状攂捫4Î反럢Ó赴")
		{
			return false;
		}
		return true;
	}

	private bool IsSpecialMakingAnim()
	{
		if (gameGoodsVo == null)
		{
			return false;
		}
		if (gameGoodsVo.DoneType == "숁끕状攂捫4Î反럢Ó赴")
		{
			return true;
		}
		return false;
	}

	private void PlayMakingSpeedupAnim(float progress)
	{
		if (IsSpecialMakingAnim())
		{
			PlaySpecialMakingSpeedupAnim(progress);
			return;
		}
		if ((Object)(object)MakingSpeedupAnimation == (Object)null)
		{
			if ((Object)(object)WorkingProgressFill != (Object)null)
			{
				WorkingProgressFill.fillAmount = progress;
			}
			return;
		}
		Singleton<GameLevelManager>.Instance.PlayAudio(10);
		if ((Object)(object)MakingSpeedupGo == (Object)null)
		{
			MakingSpeedupGo = GameLevelDefine.CreateGameObjectSync("숏끜徿焐䕗&\u0082厁숏끂榰愐楫8ª厩攡䲍", ((Component)MakingSpeedupAnimation).transform);
			if ((Object)(object)MakingSpeedupGo != (Object)null)
			{
				((Object)MakingSpeedupGo).name = "숏끜徿焐䕗&\u0082厁숏끂榰愐楫8ª厩攡䲍";
			}
		}
		mPlayCDAnim = true;
		CanWorkingIcon.SetSelfActive<Image>(true);
		WorkingIcon.SetSelfActive(active: false);
		float animShowTime = 0f;
		float animHideTime = 0f;
		AnimationClip clip = MakingSpeedupAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䶭愐汙\r:匹숄끒现栅捑\rÒ发녯孷㉐\0這\ud974");
		if ((Object)(object)clip != (Object)null)
		{
			animShowTime = clip.length;
		}
		clip = MakingSpeedupAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䶭愐汙\r:匹숄끒暰愅捑\r\u009e厝숃끒溬椄湫3¾厽");
		if ((Object)(object)clip != (Object)null)
		{
			animHideTime = clip.length;
		}
		MakingSpeedupAnimation.Stop();
		MakingSpeedupAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䶭愐汙\r:匹숄끒现栅捑\rÒ发녯孷㉐\0這\ud974");
		ScheduleMakingSpeedupResult(progress, animShowTime, animHideTime);
	}

	private void PlaySpecialMakingSpeedupAnim(float progress)
	{
		if ((Object)(object)MakingSpeedupAnimation == (Object)null)
		{
			if ((Object)(object)WorkingProgressFill != (Object)null)
			{
				WorkingProgressFill.fillAmount = progress;
			}
			return;
		}
		Singleton<GameLevelManager>.Instance.PlayAudio(10);
		string machineCompleteEffectName = GetMachineCompleteEffectName();
		GameObject specialEffect = GameLevelDefine.CreateGameObjectSync(machineCompleteEffectName, ((Component)MakingSpeedupAnimation).transform);
		if ((Object)(object)specialEffect != (Object)null)
		{
			((Object)specialEffect).name = machineCompleteEffectName;
		}
		string machineCompleteAnimationName = GetMachineCompleteAnimationName();
		Animation val = (((Object)(object)specialEffect != (Object)null) ? specialEffect.GetComponent<Animation>() : null);
		if ((Object)(object)val == (Object)null)
		{
			if ((Object)(object)WorkingProgressFill != (Object)null)
			{
				WorkingProgressFill.fillAmount = progress;
			}
			GameLevelDefine.RecycleGameObject(specialEffect);
			return;
		}
		mPlayCDAnim = true;
		CanWorkingIcon.SetSelfActive<Image>(false);
		WorkingIcon.SetSelfActive(active: false);
		float animShowTime = 0f;
		float animHideTime = 0f;
		AnimationClip clip = val.GetClip(machineCompleteAnimationName);
		if ((Object)(object)clip != (Object)null)
		{
			animShowTime = clip.length;
		}
		clip = MakingSpeedupAnimation.GetClip("숏끛皴攐䝸7Þ叝숏끳䶭愐汙\r:匹숄끒暰愅捑\r\u009e厝숃끒溬椄湫3¾厽");
		if ((Object)(object)clip != (Object)null)
		{
			animHideTime = clip.length;
		}
		val.Stop();
		if ((Object)(object)val.GetClip(machineCompleteAnimationName) != (Object)null)
		{
			val.Play(machineCompleteAnimationName);
		}
		Action callBack = () =>
		{
			GameLevelDefine.RecycleGameObject(specialEffect);
			specialEffect = null;
		};
		ScheduleMakingSpeedupResult(progress, animShowTime, animHideTime, callBack);
	}

	private void ScheduleMakingSpeedupResult(float progress, float animShowTime, float animHideTime, Action callBack = null)
	{
		if (progress < 1f)
		{
			AudioManager.Instance.PlayEffect("숆끞犺弇捑3Î反듲\u009f赴");
		}
		TimeManager.Instance.Schedule(this, (float show) =>
		{
			if (progress >= 1f)
			{
				if ((Object)(object)WorkingProgressFill != (Object)null)
				{
					WorkingProgressFill.fillAmount = progress;
				}
				mPlayCDAnim = false;
				UpdateIcon();
			}
			else
			{
				if ((Object)(object)WorkingProgressFill != (Object)null)
				{
					WorkingProgressFill.fillAmount = progress;
				}
				MakingSpeedupAnimation.Stop();
				MakingSpeedupAnimation.Play("숏끛皴攐䝸7Þ叝숏끳䶭愐汙\r:匹숄끒暰愅捑\r\u009e厝숃끒溬椄湫3¾厽");
				TimeManager.Instance.Schedule(this, (float hide) =>
				{
					mPlayCDAnim = false;
					UpdateIcon();
				}, animHideTime, 1);
			}
			callBack.InvokeGracefully();
		}, animShowTime, 1);
		if (progress >= 1f)
		{
			TimeManager.Instance.Schedule(this, (float show) =>
			{
				if ((Object)(object)WorkingProgressFill != (Object)null)
				{
					WorkingProgressFill.fillAmount = progress;
				}
				CanWorkingIcon.SetSelfActive<Image>(false);
			}, animShowTime - 0.3f, 1);
		}
		CommonMaskViewLogic.Show(animShowTime);
	}

	[AsyncStateMachine(typeof(_003CPlayItemJumpAnim_003Ed__177))]
	public UniTask PlayItemJumpAnim(float delay)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayItemJumpAnim_003Ed__177 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.delay = delay;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayItemJumpAnim_003Ed__177>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CPlayGoodsTakeout_003Ed__179))]
	public UniTask PlayGoodsTakeout()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayGoodsTakeout_003Ed__179 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayGoodsTakeout_003Ed__179>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void HideGoodsTakeout()
	{
		if ((Object)(object)TakeoutGo != (Object)null)
		{
			TimeManager.GetInstance().ClearSchedule(TakeoutGo);
			GameLevelDefine.RecycleGameObject(TakeoutGo);
			TakeoutGo = null;
		}
	}

	[AsyncStateMachine(typeof(_003CPlayGoodsTakeoutNewAni_003Ed__182))]
	public UniTask PlayGoodsTakeoutNewAni(Action action = null)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayGoodsTakeoutNewAni_003Ed__182 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.action = action;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayGoodsTakeoutNewAni_003Ed__182>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void HideGoodsTakeoutNewAni()
	{
		if ((Object)(object)NewTakeoutGo != (Object)null)
		{
			TimeManager.GetInstance().ClearSchedule(NewTakeoutGo);
			GameLevelDefine.RecycleGameObject(NewTakeoutGo);
			NewTakeoutGo = null;
		}
	}

	public void PlayItemIconParentShowAni(Action onComplete = null)
	{
		//IL_0043: Unknown result type (might be due to invalid IL or missing references)
		//IL_00a8: Unknown result type (might be due to invalid IL or missing references)
		//IL_00e8: Unknown result type (might be due to invalid IL or missing references)
		//IL_014c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0151: Unknown result type (might be due to invalid IL or missing references)
		//IL_016c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0171: Unknown result type (might be due to invalid IL or missing references)
		//IL_018c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0191: Unknown result type (might be due to invalid IL or missing references)
		//IL_01ac: Unknown result type (might be due to invalid IL or missing references)
		//IL_01b1: Unknown result type (might be due to invalid IL or missing references)
		//IL_01cc: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d1: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d6: Unknown result type (might be due to invalid IL or missing references)
		//IL_01e0: Expected Obj, but got Unknown
		//IL_0224: Unknown result type (might be due to invalid IL or missing references)
		//IL_022e: Expected Obj, but got Unknown
		if (!((Object)(object)mWorkingEffect == (Object)null))
		{
			KillItemIconParentShowAni();
			mWorkingEffect.transform.localScale = new Vector3(0f, 0f, 1f);
			mWorkingEffect.transform.LocalPositionY<Transform>(-40f);
			DOTweenTools.SetUIOpacityCanvasGroup(mWorkingEffect.transform, 0f);
			_showAniSequence = DOTween.Sequence();
			TweenSettingsExtensions.Insert(_showAniSequence, 0f, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(mWorkingEffect.transform, new Vector3(1.25f, 1.25f, 1f), 0.133f), (Ease)4));
			TweenSettingsExtensions.Insert(_showAniSequence, 0.133f, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(mWorkingEffect.transform, new Vector3(1f, 1f, 1f), 0.2f), (Ease)4));
			TweenSettingsExtensions.Insert(_showAniSequence, 0f, (Tween)(object)DOTweenTools.UIDOCanvasGroup(mWorkingEffect.transform, 1f, 0.1f, (Ease)4));
			AnimationCurve yCurve = new AnimationCurve(new Keyframe[5]
			{
				new Keyframe(0f, -40f, 0f, 466f),
				new Keyframe(0.133f, 22.13f, 1.69f, 1.69f),
				new Keyframe(0.333f, -0.35f, -236.94f, 23.22f),
				new Keyframe(0.467f, 2.74f, 0f, 0f),
				new Keyframe(0.567f, 0f, -27.45f, 0f)
			});
			TweenSettingsExtensions.Insert(_showAniSequence, 0f, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(DOVirtual.Float(0f, 0.567f, 0.567f, (TweenCallback<float>)((float t) =>
			{
				//IL_0010: Unknown result type (might be due to invalid IL or missing references)
				//IL_0015: Unknown result type (might be due to invalid IL or missing references)
				//IL_0039: Unknown result type (might be due to invalid IL or missing references)
				Vector3 localPosition = mWorkingEffect.transform.localPosition;
				localPosition.y = yCurve.Evaluate(t);
				mWorkingEffect.transform.localPosition = localPosition;
			})), (Ease)1));
			TweenSettingsExtensions.OnComplete<Sequence>(_showAniSequence, (TweenCallback)(() =>
			{
				onComplete?.Invoke();
			}));
		}
	}

	public void KillItemIconParentShowAni()
	{
		Sequence showAniSequence = _showAniSequence;
		if (showAniSequence != null)
		{
			TweenExtensions.Kill((Tween)(object)showAniSequence, false);
		}
		_showAniSequence = null;
	}

	public async void PlayDesignatedEffect(string effectName, float hideDuration = 0f)
	{
		HideDesignatedEffect();
		mDesignatedEffect = GameLevelDefine.CreateGameObjectAsync(effectName, ((Component)this).transform);
		if ((Object)(object)mDesignatedEffect != (Object)null && hideDuration > 0f)
		{
			CommonMaskViewLogic.Show(hideDuration);
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				HideDesignatedEffect();
			}, hideDuration, 1);
		}
	}

	public void HideDesignatedEffect()
	{
		GameLevelDefine.RecycleGameObject(mDesignatedEffect);
		mDesignatedEffect = null;
		GameLevelDefine.RecycleGameObject(mMergeSuccessGo);
		mMergeSuccessGo = null;
		HideLevelItemAnim(recall: true);
	}

	private void HideLevelItemAnim(bool recall)
	{
		mPlayFlyAnim = false;
	}

	public async void PlayDesignatedMakeEffect(string effectName)
	{
		HideDesignatedMakeEffect();
		mDesignatedMakeEffect = GameLevelDefine.CreateGameObjectAsync(effectName, ((Component)this).transform);
		if ((Object)(object)mDesignatedMakeEffect != (Object)null)
		{
			((Object)mDesignatedMakeEffect).name = effectName;
			TimeManager.GetInstance().Schedule(this, (float dt) =>
			{
				HideDesignatedEffect();
			}, 3f, 1);
		}
	}

	public void HideDesignatedMakeEffect()
	{
		GameLevelDefine.RecycleGameObject(mDesignatedMakeEffect);
		mDesignatedMakeEffect = null;
	}

	public void PlayGoodsHintAnim()
	{
		//IL_003d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0078: Unknown result type (might be due to invalid IL or missing references)
		//IL_00b3: Unknown result type (might be due to invalid IL or missing references)
		//IL_00ee: Unknown result type (might be due to invalid IL or missing references)
		//IL_0129: Unknown result type (might be due to invalid IL or missing references)
		//IL_0164: Unknown result type (might be due to invalid IL or missing references)
		Sequence val = goodsHintQuence;
		if (val != null)
		{
			TweenExtensions.Kill((Tween)(object)val, false);
		}
		goodsHintQuence = DOTween.Sequence();
		TweenSettingsExtensions.Append(goodsHintQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)ProduceAnim).transform, new Vector3(1.15f, 1.15f, 1f), 0.26f), (Ease)6));
		TweenSettingsExtensions.Append(goodsHintQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)ProduceAnim).transform, new Vector3(0.9f, 0.9f, 1f), 0.2f), (Ease)2));
		TweenSettingsExtensions.Append(goodsHintQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)ProduceAnim).transform, new Vector3(1.1f, 1.1f, 1f), 0.24f), (Ease)2));
		TweenSettingsExtensions.Append(goodsHintQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)ProduceAnim).transform, new Vector3(0.95f, 0.95f, 1f), 0.23f), (Ease)2));
		TweenSettingsExtensions.Append(goodsHintQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)ProduceAnim).transform, new Vector3(1.05f, 1.05f, 1f), 0.27f), (Ease)2));
		TweenSettingsExtensions.Append(goodsHintQuence, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(((Component)ProduceAnim).transform, new Vector3(1f, 1f, 1f), 0.2f), (Ease)2));
		TweenExtensions.Play<Sequence>(TweenSettingsExtensions.SetAutoKill<Sequence>(goodsHintQuence, true));
	}

	public void PlayGoodsFromFlyHint(Func<Transform, Sequence> seq)
	{
		Sequence val = goodsHintQuence;
		if (val != null)
		{
			TweenExtensions.Kill((Tween)(object)val, false);
		}
		if (seq != null && (Object)(object)ProduceAnim != (Object)null)
		{
			goodsHintQuence = seq(((Component)ProduceAnim).transform);
		}
	}

	private void SetUnlockWidget()
	{
		//IL_0053: Unknown result type (might be due to invalid IL or missing references)
		if ((Object)(object)mItemUnlockWidget == (Object)null)
		{
			GameObject val = GameLevelDefine.CreateGameObjectSync("숇끎沼漈䥡<¶厵숃끑斎琄捐5\u009a厙", ((Component)ProduceAnim).transform);
			if ((Object)(object)val != (Object)null)
			{
				mItemUnlockWidget = val.GetComponent<ItemUnlockWidget>();
				((Component)mItemUnlockWidget).transform.localPosition = new Vector3(0f, -30f, 0f);
			}
		}
	}

	[AsyncStateMachine(typeof(_003CPlayUndoShow_003Ed__198))]
	public UniTask PlayUndoShow(Action action = null)
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0039: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayUndoShow_003Ed__198 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj.action = action;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayUndoShow_003Ed__198>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void InterruptAnimtion()
	{
		//IL_0075: Unknown result type (might be due to invalid IL or missing references)
		mPlayFlyAnim = false;
		mPlayCDAnim = false;
		mGlobalSpeedupState = false;
		Sequence itemMoveTween = ItemMoveTween;
		if (itemMoveTween != null)
		{
			TweenExtensions.Kill((Tween)(object)itemMoveTween, false);
		}
		Sequence val = flyScaleQuence;
		if (val != null)
		{
			TweenExtensions.Kill((Tween)(object)val, false);
		}
		Sequence val2 = flyMoveQuence;
		if (val2 != null)
		{
			TweenExtensions.Kill((Tween)(object)val2, false);
		}
		Sequence val3 = itemShowQuence;
		if (val3 != null)
		{
			TweenExtensions.Kill((Tween)(object)val3, false);
		}
		Sequence val4 = goodsHintQuence;
		if (val4 != null)
		{
			TweenExtensions.Kill((Tween)(object)val4, false);
		}
		((Component)this).transform.localPosition = Vector3.zero;
		DragIcon.raycastTarget = true;
		HideLevelItemAnim(recall: false);
		UpdateIcon();
	}

	private void Reset()
	{
		//IL_003d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0060: Unknown result type (might be due to invalid IL or missing references)
		//IL_0098: Unknown result type (might be due to invalid IL or missing references)
		//IL_0118: Unknown result type (might be due to invalid IL or missing references)
		//IL_013c: Unknown result type (might be due to invalid IL or missing references)
		//IL_0141: Unknown result type (might be due to invalid IL or missing references)
		//IL_01de: Unknown result type (might be due to invalid IL or missing references)
		//IL_0202: Unknown result type (might be due to invalid IL or missing references)
		//IL_0207: Unknown result type (might be due to invalid IL or missing references)
		//IL_0241: Unknown result type (might be due to invalid IL or missing references)
		//IL_0265: Unknown result type (might be due to invalid IL or missing references)
		//IL_026a: Unknown result type (might be due to invalid IL or missing references)
		//IL_02e1: Unknown result type (might be due to invalid IL or missing references)
		//IL_02f7: Unknown result type (might be due to invalid IL or missing references)
		//IL_031b: Unknown result type (might be due to invalid IL or missing references)
		mGoodsBackgroundType = 0;
		mBingoGoodsState = 0;
		mProduceBackground = false;
		mPlayCDAnim = false;
		mGlobalSpeedupState = false;
		isDownSelect = false;
		ShortcutExtensions.DOKill((Component)(object)((Component)this).transform, false);
		((Component)this).transform.localScale = Vector3.one;
		if ((Object)(object)ProduceAnim != (Object)null)
		{
			((Component)ProduceAnim).transform.localScale = Vector3.one;
		}
		if ((Object)(object)((Component)ProduceAnim).GetComponent<CanvasGroup>() != (Object)null)
		{
			((Component)ProduceAnim).GetComponent<CanvasGroup>().alpha = 1f;
		}
		((Graphic)ItemIcon).color = Color.white;
		((Component)this).gameObject.SetSelfActive(active: true);
		ItemIcon.SetSelfActive<Image>(true);
		SetItemBackground(active: false);
		SetBingGoIcon(active: false);
		WebIcon.SetSelfActive<Image>(false);
		((Component)WebIcon).transform.setLocalPosition();
		BubbleIconGo.SetSelfActive(active: false);
		ItemIconParent.SetSelfActive<Transform>(true);
		((Component)CanWorkingIcon).transform.localScale = Vector3.one;
		((Graphic)CanWorkingIcon).rectTransform.anchoredPosition = Vector2.op_Implicit(new Vector3(14f, -19f, 0f));
		CanWorkingIcon.SetSelfActive<Image>(false);
		MaterialInNoMaking.SetSelfActive(active: false);
		MaterialInNoOrder.SetSelfActive(active: false);
		WorkingIcon.SetSelfActive(active: false);
		WorkingComplete.SetSelfActive(active: false);
		WorkingProgress.SetSelfActive(active: false);
		if ((Object)(object)WorkingProgress.GetComponent<CanvasGroup>() != (Object)null)
		{
			WorkingProgress.GetComponent<CanvasGroup>().alpha = 1f;
		}
		_produceGo.SetSelfActive(active: false);
		CoolDownIconGo.SetSelfActive(active: false);
		CoolDownIconGo.transform.localScale = Vector3.one;
		CoolDownIconGo.GetComponent<RectTransform>().anchoredPosition = Vector2.op_Implicit(new Vector3(-20f, -20f, 0f));
		CoolDownSpine.SetSelfActive<SkeletonGraphic>(false);
		if ((Object)(object)ufoSpeedSpine != (Object)null)
		{
			Object.Destroy((Object)(object)ufoSpeedSpine);
		}
		CoolDownBottomGo.transform.localScale = Vector3.one;
		CoolDownBottomGo.GetComponent<RectTransform>().anchoredPosition = Vector2.op_Implicit(new Vector3(-20f, 14f, 0f));
		CoolDownBottomGo.SetSelfActive(active: false);
		CoolDownText.SetSelfActive<Text>(false);
		BoxLock.SetSelfActive<Image>(false);
		MaxLevelIcon.SetSelfActive<Image>(false);
		DebugText.SetSelfActive<Text>(false);
		CDTimeDebugText.SetSelfActive<Text>(false);
		if ((Object)(object)MakingSpeedupGo != (Object)null)
		{
			MakingSpeedupGo.SetSelfActive(active: false);
		}
		((Component)ItemIcon).transform.localRotation = Quaternion.identity;
		((Component)ItemIcon).transform.localPosition = ITEM_ICON_DEFAULT_POS;
		((Component)ItemIcon).transform.localScale = new Vector3(0.565f, 0.565f, 1f);
		ClockIcon.sprite = resLoader.LoadSync<Sprite>("숉끓憆琊畆7\u008a厉숞끈徆挟敛\"\u0082厁뻸");
		((Graphic)ClockIcon).SetNativeSize();
		GameLevelDefine.RecycleGameObject(SpeedupEffectGo);
		if ((Object)(object)BubbleAnim != (Object)null)
		{
			GameLevelDefine.RecycleGameObject(((Component)BubbleAnim).gameObject);
		}
		if ((Object)(object)BubbleDiscountAnim != (Object)null)
		{
			GameLevelDefine.RecycleGameObject(((Component)BubbleDiscountAnim).gameObject);
		}
		GameLevelDefine.RecycleGameObject(mMergeHintGo);
		GameLevelDefine.RecycleGameObject(mMergeSuccessGo);
		GameLevelDefine.RecycleGameObject(mMergeSuccessBottomGo);
		GameLevelDefine.RecycleGameObject(mMergeSuccessTopGo);
		if ((Object)(object)mItemCollectWidget != (Object)null)
		{
			GameLevelDefine.RecycleGameObject(((Component)mItemCollectWidget).gameObject);
		}
		if ((Object)(object)mItemActivityWidget != (Object)null)
		{
			GameLevelDefine.RecycleGameObject(((Component)mItemActivityWidget).gameObject);
		}
		if ((Object)(object)mItemUnlockWidget != (Object)null)
		{
			GameLevelDefine.RecycleGameObject(((Component)mItemUnlockWidget).gameObject);
		}
		if ((Object)(object)mItemUncooledWidget != (Object)null)
		{
			GameLevelDefine.RecycleGameObject(((Component)mItemUncooledWidget).gameObject);
		}
		SpeedupEffectGo = null;
		BubbleAnim = null;
		BubbleDiscountAnim = null;
		mMergeHintGo = null;
		mMergeSuccessGo = null;
		mMergeSuccessBottomGo = null;
		mMergeSuccessTopGo = null;
		mItemCollectWidget = null;
		mItemActivityWidget = null;
		mItemUnlockWidget = null;
		mItemUncooledWidget = null;
		hideAdditionalNode();
		HideProduceAnim();
		HideBoxProduceAnim();
		HideMergeHintEffect();
		HideMakingEffect();
		HideCoveredBroken();
		HideClearVineAnim();
		HidePlusAdditional();
		HideOnceAnim();
		HideGoodsTakeout();
		HideGoodsTakeoutNewAni();
		HideDesignatedEffect();
		HideDesignatedMakeEffect();
		HideScissorIdle();
		HideFeverFlambeEffect();
		HideFeverFlambeCDEffect();
		HideFeverRelayEffect();
		HideFeverRelayCDEffect();
		RecycleFeverFeedbackEffect();
		if ((Object)(object)gameLevelGrid != (Object)null)
		{
			gameLevelGrid.RemoveMergeHint();
		}
		MergeHintHideLocal();
		TimeManager.Instance.ClearSchedule(this);
	}

	public override void Recovery()
	{
		//IL_008c: Unknown result type (might be due to invalid IL or missing references)
		base.Recovery();
		HideLevelItemAnim(recall: false);
		updateSize(mCellSpace, mCellSpace);
		Reset();
		mPlayFlyAnim = false;
		Sequence itemMoveTween = ItemMoveTween;
		if (itemMoveTween != null)
		{
			TweenExtensions.Kill((Tween)(object)itemMoveTween, false);
		}
		Sequence val = flyScaleQuence;
		if (val != null)
		{
			TweenExtensions.Kill((Tween)(object)val, false);
		}
		Sequence val2 = flyMoveQuence;
		if (val2 != null)
		{
			TweenExtensions.Kill((Tween)(object)val2, false);
		}
		Sequence val3 = itemShowQuence;
		if (val3 != null)
		{
			TweenExtensions.Kill((Tween)(object)val3, false);
		}
		Sequence val4 = goodsHintQuence;
		if (val4 != null)
		{
			TweenExtensions.Kill((Tween)(object)val4, false);
		}
		((Component)this).transform.localPosition = Vector3.zero;
		DragIcon.raycastTarget = true;
		DestroyGameObject();
		destroyAdditionalNode();
	}

	private void DestroyGameObject()
	{
		GameLevelDefine.RecycleGameObject(SpeedupEffectGo);
		GameLevelDefine.RecycleGameObject(MakingSpeedupGo);
		GameLevelDefine.RecycleGameObject(BoxProduceEffect);
		GameLevelDefine.RecycleGameObject(_produceStarGo);
		RecycleFeverFeedbackEffect();
		SpeedupEffectGo = null;
		MakingSpeedupGo = null;
		BoxProduceEffect = null;
		_produceStarGo = null;
		mFeverRelayFeedbackEffect = null;
		_produceStarSpine = null;
		_currentStarSpineName = null;
		_currentProudceName = null;
	}

	private void OnEnable()
	{
		//IL_0027: Unknown result type (might be due to invalid IL or missing references)
		//IL_003d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0061: Unknown result type (might be due to invalid IL or missing references)
		HideDesignatedEffect();
		HideDesignatedMakeEffect();
		ShowGeneratorDebug();
		if (!((Object)(object)((Component)this).transform == (Object)null))
		{
			((Component)this).transform.localScale = Vector3.one;
			((Component)ItemIcon).transform.localPosition = ITEM_ICON_DEFAULT_POS;
			((Component)ItemIcon).transform.localScale = new Vector3(0.565f, 0.565f, 1f);
			if (!((Object)(object)gameLevelGrid == (Object)null) && goodsBaseVo != null && !gameLevelGrid.IsLock && ((goodsBaseVo.type != 1 && goodsBaseVo.type != 9) || gameGoodsVo.GoodsState == GameGoodsState.Bubble))
			{
				UpdateIcon();
			}
		}
	}

	private void ShowGeneratorDebug()
	{
		if (gameGoodsVo == null || goodsBaseVo == null)
		{
			return;
		}
		if (GameConst.GAME_MODE != GameConstMode.RELEASE)
		{
			if (Singleton<GameLevelManager>.Instance.ShowDebug)
			{
				if (IGoodsBaseVo.IsCreator(goodsBaseVo.type) || goodsBaseVo.type == 30)
				{
					if (goodsBaseVo.type == 5)
					{
						DebugText.text = gameGoodsVo.PassiveSurplusNumber + "숅뀆犺㴆⁘=Î反쉚끼ゟ㹛⌄bÅ叄" + gameGoodsVo.PassiveSequenceID + "숅뀕犺㸆㱘=Î反";
					}
					else
					{
						DebugText.text = gameGoodsVo.InitiativeSurplusNumber + "숅뀆犺㴆⁘=Î反쉚끼ゟ㹛⌄bÅ叄" + gameGoodsVo.InitiativeSequenceID + "숅뀕犺㸆㱘=Î反";
					}
					DebugText.SetSelfActive<Text>(true);
				}
				else if (IGoodsBaseVo.IsConversion(goodsBaseVo.type))
				{
					IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(goodsBaseVo.goodsID);
					if (initiativeProduceById != null)
					{
						DebugText.text = (initiativeProduceById.capacity - gameGoodsVo.InitiativeUseTotal).ToString();
						DebugText.SetSelfActive<Text>(true);
					}
				}
				else
				{
					DebugText.text = gameGoodsVo.goodsID.ToString();
					DebugText.SetSelfActive<Text>(true);
				}
			}
			else
			{
				DebugText.text = "";
				DebugText.SetSelfActive<Text>(false);
			}
		}
		SetProduceCDDebug();
	}

	private void SetProduceCDDebug()
	{
		if (gameGoodsVo == null || goodsBaseVo == null || GameConst.GAME_MODE == GameConstMode.RELEASE)
		{
			return;
		}
		if (Singleton<GameLevelManager>.Instance.ShowDebug)
		{
			CDTimeDebugText.SetSelfActive<Text>(true);
			if (IGoodsBaseVo.IsCoolDown(gameGoodsVo.GoodsState) || gameGoodsVo.GoodsState == GameGoodsState.AutoProduce)
			{
				IGoodsProduceVo initiativeProduceById = Singleton<GameLevelManager>.Instance.GetInitiativeProduceById(gameGoodsVo.goodsID);
				if (initiativeProduceById != null)
				{
					if (gameGoodsVo.InitiativeCDStarTime > 0)
					{
						int cDTime = initiativeProduceById.GetCDTime(gameGoodsVo.InitiativeCDIndex);
						long num = ServerTimeManager.CurrentTime() - gameGoodsVo.InitiativeCDStarTime;
						CDTimeDebugText.text = string.Format("类04뀯}ﱣ哕", num, cDTime);
					}
					return;
				}
				initiativeProduceById = Singleton<GameLevelManager>.Instance.GetPassiveProduceById(gameGoodsVo.goodsID);
				if (initiativeProduceById != null && gameGoodsVo.PassiveCDStarTime > 0)
				{
					int cDTime2 = initiativeProduceById.GetCDTime(gameGoodsVo.PassiveCDIndex);
					int passiveCDInterval = GameLevelDefine.GetPassiveCDInterval(gameGoodsVo, initiativeProduceById);
					CDTimeDebugText.text = string.Format("类04뀯}ﱣ哕", passiveCDInterval, cDTime2);
				}
			}
			else
			{
				CDTimeDebugText.text = "";
			}
		}
		else
		{
			CDTimeDebugText.text = "";
			CDTimeDebugText.SetSelfActive<Text>(false);
		}
	}

	private string GetBubbleAniName()
	{
		string result = "숏끜徿焐敗&\u0082厁녩汰㰬\0郡\ud94d";
		if (goodsBaseVo != null && gameGoodsVo.BubbleDiscount < 100)
		{
			result = "숏끜徿焐敗&\u0082厁녩汰㰬\0郡\ud94d";
		}
		return result;
	}

	private void InitFeverFlambeEffect()
	{
		//IL_0247: Unknown result type (might be due to invalid IL or missing references)
		//IL_028e: Unknown result type (might be due to invalid IL or missing references)
		if (IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState) || goodsBaseVo == null || (!IGoodsBaseVo.IsCreator(goodsBaseVo.type) && !IGoodsBaseVo.IsInstrument(goodsBaseVo.type)))
		{
			return;
		}
		if ((ObjectManager.GetInstance().feverFlambeModel.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeModel.needPopBuffStartView) || (ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeV2Model.needPopBuffStartView) || (ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeStageModel.needPopBuffStartView) || (ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeV3Model.needPopBuffStartView))
		{
			int buffRemainTime = ObjectManager.GetInstance().goodsBuffModel.GetBuffRemainTime(GoodsBuffType.Generator_No_CD, goodsBaseVo.series);
			if (buffRemainTime <= 0)
			{
				buffRemainTime = ObjectManager.GetInstance().goodsBuffModel.GetBuffRemainTime(GoodsBuffType.Instrument_Speed_Up, goodsBaseVo.series);
			}
			if (buffRemainTime <= 0)
			{
				buffRemainTime = ObjectManager.GetInstance().goodsBuffModel.GetBuffRemainTime(GoodsBuffType.PassiveCD_Speed_Up, goodsBaseVo.series);
			}
			int buffActivityId = ObjectManager.GetInstance().goodsBuffModel.GetBuffActivityId(GoodsBuffType.Generator_No_CD, goodsBaseVo.series);
			if (buffActivityId != 1410 && buffActivityId != 1550 && buffActivityId != 1551 && buffActivityId != 1910)
			{
				buffActivityId = ObjectManager.GetInstance().goodsBuffModel.GetBuffActivityId(GoodsBuffType.Instrument_Speed_Up, goodsBaseVo.series);
			}
			if (buffActivityId != 1410 && buffActivityId != 1550 && buffActivityId != 1551 && buffActivityId != 1910)
			{
				buffActivityId = ObjectManager.GetInstance().goodsBuffModel.GetBuffActivityId(GoodsBuffType.PassiveCD_Speed_Up, goodsBaseVo.series);
			}
			List<int> showingOrderNeedInitiativeGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetShowingOrderNeedInitiativeGeneratorSeries();
			List<int> orderNeedInstrumentSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedInstrumentSeries();
			List<int> showingOrderNeedPassiveGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetShowingOrderNeedPassiveGeneratorSeries();
			showingOrderNeedInitiativeGeneratorSeries.AddRange(orderNeedInstrumentSeries);
			showingOrderNeedInitiativeGeneratorSeries.AddRange(showingOrderNeedPassiveGeneratorSeries);
			if (buffRemainTime > 0 && (buffActivityId == 1410 || buffActivityId == 1550 || buffActivityId == 1551 || buffActivityId == 1910) && showingOrderNeedInitiativeGeneratorSeries.Contains(goodsBaseVo.series) && !GetPassiveGeneratorIsCoolDown() && !mProduceBackground)
			{
				PlayFeverFlambeEffect();
			}
			else
			{
				HideFeverFlambeEffect();
			}
			if (buffRemainTime > 0 && (buffActivityId == 1550 || buffActivityId == 1551 || buffActivityId == 1910) && showingOrderNeedPassiveGeneratorSeries.Contains(goodsBaseVo.series) && GetPassiveGeneratorIsCoolDown())
			{
				PlayFeverFlambeCDEffect();
			}
			else
			{
				HideFeverFlambeCDEffect();
			}
		}
		else
		{
			HideFeverFlambeEffect();
			HideFeverFlambeCDEffect();
		}
	}

	[AsyncStateMachine(typeof(_003CPlayFeverFlambeEffect_003Ed__215))]
	public UniTask PlayFeverFlambeEffect()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayFeverFlambeEffect_003Ed__215 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayFeverFlambeEffect_003Ed__215>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CPlayFeverFlambeCDEffect_003Ed__216))]
	public UniTask PlayFeverFlambeCDEffect()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayFeverFlambeCDEffect_003Ed__216 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayFeverFlambeCDEffect_003Ed__216>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void HideFeverFlambeEffect()
	{
		GameLevelDefine.RecycleGameObject(mFeverFlambeEffectGo);
		mFeverFlambeEffectGo = null;
	}

	public void HideFeverFlambeCDEffect()
	{
		GameLevelDefine.RecycleGameObject(mFeverFlambeCDEffectGo);
		mFeverFlambeCDEffectGo = null;
	}

	private void InitFeverRelayEffect()
	{
		//IL_0232: Unknown result type (might be due to invalid IL or missing references)
		//IL_0269: Unknown result type (might be due to invalid IL or missing references)
		if (IGoodsBaseVo.IsDisabled(gameGoodsVo.GoodsState) || (!IGoodsBaseVo.IsCreator(goodsBaseVo.type) && !IGoodsBaseVo.IsInstrument(goodsBaseVo.type)) || goodsBaseVo == null)
		{
			return;
		}
		if ((ObjectManager.GetInstance().feverRelayModel.IsActiveBuff() && !ObjectManager.GetInstance().feverRelayModel.needPopBuffStartView && !ObjectManager.GetInstance().feverRelayModel.needPopBuffRefreshView) || (ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff() && !ObjectManager.GetInstance().feverRelayV2Model.needPopBuffStartView && !ObjectManager.GetInstance().feverRelayV2Model.needPopBuffRefreshView))
		{
			int buffRemainTime = ObjectManager.GetInstance().goodsBuffModel.GetBuffRemainTime(GoodsBuffType.Generator_No_CD, goodsBaseVo.series);
			if (buffRemainTime <= 0)
			{
				buffRemainTime = ObjectManager.GetInstance().goodsBuffModel.GetBuffRemainTime(GoodsBuffType.Instrument_Speed_Up, goodsBaseVo.series);
			}
			if (buffRemainTime <= 0)
			{
				buffRemainTime = ObjectManager.GetInstance().goodsBuffModel.GetBuffRemainTime(GoodsBuffType.PassiveCD_Speed_Up, goodsBaseVo.series);
			}
			int buffActivityId = ObjectManager.GetInstance().goodsBuffModel.GetBuffActivityId(GoodsBuffType.Generator_No_CD, goodsBaseVo.series);
			if (buffActivityId != 1420 && buffActivityId != 1560)
			{
				buffActivityId = ObjectManager.GetInstance().goodsBuffModel.GetBuffActivityId(GoodsBuffType.Instrument_Speed_Up, goodsBaseVo.series);
			}
			if (buffActivityId != 1420 && buffActivityId != 1560)
			{
				buffActivityId = ObjectManager.GetInstance().goodsBuffModel.GetBuffActivityId(GoodsBuffType.PassiveCD_Speed_Up, goodsBaseVo.series);
			}
			int num = -1;
			num = ((!ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff()) ? ObjectManager.GetInstance().feverRelayModel.OrderIndex : ObjectManager.GetInstance().feverRelayV2Model.OrderIndex);
			List<int> orderNeedGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedGeneratorSeries(num);
			List<int> orderNeedInstrumentSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedInstrumentSeries(num);
			List<int> orderNeedPassiveGeneratorSeries = ObjectManager.GetInstance().gameOrdersModel.GetOrderNeedPassiveGeneratorSeries(num);
			orderNeedGeneratorSeries.AddRange(orderNeedInstrumentSeries);
			orderNeedGeneratorSeries.AddRange(orderNeedPassiveGeneratorSeries);
			if (buffRemainTime > 0 && (buffActivityId == 1420 || buffActivityId == 1560) && orderNeedGeneratorSeries.Contains(goodsBaseVo.series) && !GetPassiveGeneratorIsCoolDown() && !mProduceBackground)
			{
				PlayFeverRelayEffect();
			}
			else
			{
				HideFeverRelayEffect();
			}
			if (buffRemainTime > 0 && buffActivityId == 1560 && orderNeedPassiveGeneratorSeries.Contains(goodsBaseVo.series) && GetPassiveGeneratorIsCoolDown())
			{
				PlayFeverRelayCDEffect();
			}
			else
			{
				HideFeverRelayCDEffect();
			}
		}
		else
		{
			HideFeverRelayEffect();
			HideFeverRelayCDEffect();
		}
	}

	[AsyncStateMachine(typeof(_003CPlayFeverRelayEffect_003Ed__220))]
	public UniTask PlayFeverRelayEffect()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayFeverRelayEffect_003Ed__220 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayFeverRelayEffect_003Ed__220>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	[AsyncStateMachine(typeof(_003CPlayFeverRelayCDEffect_003Ed__221))]
	public UniTask PlayFeverRelayCDEffect()
	{
		//IL_0002: Unknown result type (might be due to invalid IL or missing references)
		//IL_0007: Unknown result type (might be due to invalid IL or missing references)
		//IL_0031: Unknown result type (might be due to invalid IL or missing references)
		_003CPlayFeverRelayCDEffect_003Ed__221 obj = default;
		obj._003C_003Et__builder = AsyncUniTaskMethodBuilder.Create();
		obj._003C_003E4__this = this;
		obj._003C_003E1__state = -1;
		obj._003C_003Et__builder.Start<_003CPlayFeverRelayCDEffect_003Ed__221>(ref obj);
		return obj._003C_003Et__builder.Task;
	}

	public void HideFeverRelayEffect()
	{
		GameLevelDefine.RecycleGameObject(mFeverRelayEffect);
		mFeverRelayEffect = null;
	}

	public void HideFeverRelayCDEffect()
	{
		GameLevelDefine.RecycleGameObject(mFeverRelayCDEffect);
		mFeverRelayCDEffect = null;
	}

	public void PlayFeverFeedbackEffect()
	{
		//IL_011f: Unknown result type (might be due to invalid IL or missing references)
		//IL_014a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0174: Unknown result type (might be due to invalid IL or missing references)
		if ((!ObjectManager.GetInstance().feverRelayModel.IsActiveBuff() && !ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff()) || (ObjectManager.GetInstance().feverRelayModel.IsActiveBuff() && !ObjectManager.GetInstance().feverRelayModel.HasActivityRes) || (ObjectManager.GetInstance().feverRelayV2Model.IsActiveBuff() && !ObjectManager.GetInstance().feverRelayV2Model.HasActivityRes) || (ObjectManager.GetInstance().feverFlambeV2Model.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeV2Model.HasActivityRes) || (ObjectManager.GetInstance().feverFlambeStageModel.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeStageModel.HasActivityRes) || (ObjectManager.GetInstance().feverFlambeV3Model.IsActiveBuff() && !ObjectManager.GetInstance().feverFlambeV3Model.HasActivityRes))
		{
			return;
		}
		Sequence val = DOTween.Sequence();
		TweenSettingsExtensions.Append(val, (Tween)(object)ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(0.8f, 0.8f, 0.8f), 0.066f));
		TweenSettingsExtensions.Append(val, (Tween)(object)ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(1.3f, 1.3f, 1.3f), 0.166f));
		TweenSettingsExtensions.Append(val, (Tween)(object)ShortcutExtensions.DOScale(((Component)this).transform, new Vector3(1f, 1f, 1f), 0.266f));
		RecycleFeverFeedbackEffect();
		mFeverRelayFeedbackEffect = Singleton<ResCacheManager>.Instance.GetGameobject("숏끟犯愐䙆\u0006Î反숵끖斪搶楒7\u009a厙刔暿\ud9caş");
		if (!((Object)(object)mFeverRelayFeedbackEffect == (Object)null))
		{
			mFeverRelayFeedbackEffect.transform.SetParent(EffectTopParent);
			mFeverRelayFeedbackEffect.transform.LocalIdentity<Transform>();
			mFeverRelayFeedbackEffect.SetSelfActive(active: true);
			TimeManager.Instance.Schedule(this, (float dt) =>
			{
				RecycleFeverFeedbackEffect();
			}, 1f, 1, 0f);
		}
	}

	private void RecycleFeverFeedbackEffect()
	{
		if ((Object)(object)mFeverRelayFeedbackEffect != (Object)null)
		{
			mFeverRelayFeedbackEffect.SetSelfActive(active: false);
			Singleton<ResCacheManager>.Instance.RecoveryGameobject(mFeverRelayFeedbackEffect);
			mFeverRelayFeedbackEffect = null;
		}
	}

	public bool GetPassiveGeneratorIsCoolDown()
	{
		if (goodsBaseVo != null && goodsBaseVo.type == 5 && gameGoodsVo.GoodsState == GameGoodsState.CoolDown && gameGoodsVo.InitiativeAdditionalNumber <= 0 && gameGoodsVo.UncooledDuration() <= 0)
		{
			return true;
		}
		return false;
	}

	public void UpdateIconDebug(GameGoodsVo goodsVo, GameLevelGrid _grid)
	{
		gameGoodsVo = goodsVo;
		gameLevelGrid = _grid;
		goodsBaseVo = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(gameGoodsVo.goodsID);
		if (goodsBaseVo != null)
		{
			Reset();
			Singleton<GameLevelManager>.Instance.SetGoodsIcon(ItemIcon, goodsBaseVo, resLoader, original: false);
		}
	}

	public GameLevelItem()
	{
		//IL_0015: Unknown result type (might be due to invalid IL or missing references)
		//IL_001a: Unknown result type (might be due to invalid IL or missing references)
		//IL_0048: Unknown result type (might be due to invalid IL or missing references)
		//IL_004d: Unknown result type (might be due to invalid IL or missing references)
		//IL_0062: Unknown result type (might be due to invalid IL or missing references)
		//IL_0067: Unknown result type (might be due to invalid IL or missing references)
	}
}
