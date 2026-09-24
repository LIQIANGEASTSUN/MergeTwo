using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using DG.Tweening;
using TLF;
using TMPro;
using UnityEngine;

namespace MiniGame.Kitchen;

public class MGMergeView : MonoBehaviour
{
	[Serializable]
	[CompilerGenerated]
	private sealed class _003C_003Ec
	{
		public static readonly _003C_003Ec _003C_003E9 = new _003C_003Ec();

		public static TweenCallback _003C_003E9__17_0;

		internal void _003CPlayExitAni_003Eb__17_0()
		{
			MGKitchenGameManager.GetInstance().CloseView("숏끽斔嘐䵆5\u009a厙냔\u00af赴");
		}
	}

	public GameObject gridNode;

	public GameObject targetNode;

	public Animation gridAni;

	public CanvasGroup canvasGroup;

	public CanvasGroup shadowCG;

	public GameObject mainNode;

	public RTLTextMeshPro textPro;

	public CanvasGroup tipsCG;

	private MGMergeGrid gridComp;

	private MGMergeTarget targetComp;

	private List<MGFoodMaterialItem> chainList = new List<MGFoodMaterialItem>();

	private MGCookingGamePlay gamePlay;

	private int taskId = -1;

	private int curIndex;

	public void SetGamePlay(MGCookingGamePlay play)
	{
		gamePlay = play;
	}

	public void Init(MGCookMergeTaskItem taskItem, MGCookMergeLevelList levelList, Vector3? startPos, string tipKey = null)
	{
		//IL_0186: Unknown result type (might be due to invalid IL or missing references)
		//IL_018b: Unknown result type (might be due to invalid IL or missing references)
		//IL_0049: Unknown result type (might be due to invalid IL or missing references)
		//IL_0212: Unknown result type (might be due to invalid IL or missing references)
		//IL_021c: Expected Obj, but got Unknown
		//IL_01c3: Unknown result type (might be due to invalid IL or missing references)
		//IL_01d8: Unknown result type (might be due to invalid IL or missing references)
		//IL_01e2: Unknown result type (might be due to invalid IL or missing references)
		bool flag = !string.IsNullOrEmpty(tipKey);
		((Component)tipsCG).gameObject.SetActive(flag);
		if (flag)
		{
			mainNode.transform.localPosition = new Vector3(0f, -164f, 0f);
			tipsCG.alpha = 0f;
			TweenSettingsExtensions.Append(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), 0.8f), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(tipsCG, 1f, 0.5f), (Ease)4));
			string text = MGKitchenGameManager.GetInstance().miniGameBridge.GetLocalizedText(tipKey);
			if (string.IsNullOrEmpty(text))
			{
				text = tipKey;
			}
			((TMP_Text)textPro).text = text;
		}
		MGFoodMaterialStaticData foodMaterialStaticData = MGKitchenStaticDataManager.GetInstance().foodMaterialStaticData;
		List<MGFoodMaterialItem> list = new List<MGFoodMaterialItem>();
		foodMaterialStaticData.GetMergeChainById(taskItem.materialId, list);
		MGMergeGrid gridComp = gridNode.GetComponent<MGMergeGrid>();
		gridComp.SetViewComp(this);
		gridComp.SetNeedGuide(taskItem.id == 1);
		gridComp.Init(taskItem.row, taskItem.column, levelList);
		this.gridComp = gridComp;
		MGMergeTarget component = targetNode.GetComponent<MGMergeTarget>();
		component.Init(list);
		targetComp = component;
		chainList = list;
		taskId = taskItem.id;
		shadowCG.alpha = 0f;
		gridNode.SetActive(false);
		Vector3 oriP = gridNode.transform.localPosition;
		bool bMove = startPos.HasValue;
		CanvasGroup gridCG = gridNode.GetComponent<CanvasGroup>();
		if (bMove)
		{
			gridNode.transform.position = startPos.Value;
			gridNode.transform.localScale = Vector3.one * 0.1f;
			gridCG.alpha = 0.2f;
		}
		TweenCallback val3 = default;
		TweenSettingsExtensions.AppendCallback(TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), 0.5f), (TweenCallback)(() =>
		{
			//IL_0045: Unknown result type (might be due to invalid IL or missing references)
			//IL_00ce: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d3: Unknown result type (might be due to invalid IL or missing references)
			//IL_00d5: Expected Obj, but got Unknown
			//IL_00da: Expected Obj, but got Unknown
			DOTweenModuleUI.DOFade(shadowCG, 1f, 0.3f);
			gridNode.SetActive(true);
			if (bMove)
			{
				TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOLocalMove(gridNode.transform, oriP, 0.125f, false), (Ease)4);
			}
			float length = gridAni.GetClip("숞끳禊嘟啛 ê叩숅끞犼朆楹7Î反숏끬䎰漐敃\r\u0012匑숦끞斆氧汑$\u009a厙숏끕施朐乫0\u009a厙녩孮㉐\0這\ud974").length;
			TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(gridNode.transform, 1f, length), (Ease)4);
			TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(gridCG, 1f, length), (Ease)4);
			Sequence val = TweenSettingsExtensions.AppendInterval(DOTween.Sequence(), length);
			TweenCallback val2 = val3;
			if (val2 == null)
			{
				TweenCallback val4 = () =>
				{
					gridComp.OnEnterEnd();
				};
				TweenCallback val5 = val4;
				val3 = val4;
				val2 = val5;
			}
			TweenSettingsExtensions.AppendCallback(val, val2);
		}));
		OnAnalyticEvent(string.Format("숏끟涯攐汘\rº厹숵끝綼弶牏bú叹北橴ā诉饴", taskId));
	}

	public MGFoodMaterialItem GetChainItemById(int id)
	{
		for (int i = 0; i < chainList.Count; i++)
		{
			MGFoodMaterialItem mGFoodMaterialItem = chainList[i];
			if (mGFoodMaterialItem.id == id)
			{
				return mGFoodMaterialItem;
			}
		}
		Debug.LogErrorFormat("谎ʛ箰』\ufb0erò叱숋뀚\uf5d1ॻ緊钞㚋㓬뀎ӻ箰ㄏ椎rò叱뫡", new object[2] { taskId, id });
		return null;
	}

	public void PlayExitAni()
	{
		//IL_0080: Unknown result type (might be due to invalid IL or missing references)
		//IL_0085: Unknown result type (might be due to invalid IL or missing references)
		//IL_008b: Expected Obj, but got Unknown
		Transform transform = mainNode.transform;
		Sequence val = TweenSettingsExtensions.Insert(TweenSettingsExtensions.Append(TweenSettingsExtensions.Append(DOTween.Sequence(), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(transform, 1.05f, 0.1f), (Ease)4)), (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(ShortcutExtensions.DOScale(transform, 0.5f, 0.1f), (Ease)4)), 0.1f, (Tween)(object)TweenSettingsExtensions.SetEase<Tweener>(DOTweenModuleUI.DOFade(canvasGroup, 0f, 0.133f), (Ease)4));
		TweenCallback val2 = _003C_003Ec._003C_003E9__17_0;
		if (val2 == null)
		{
			TweenCallback val3 = () =>
			{
				MGKitchenGameManager.GetInstance().CloseView("숏끽斔嘐䵆5\u009a厙냔\u00af赴");
			};
			_003C_003Ec._003C_003E9__17_0 = val3;
			val2 = val3;
		}
		TweenSettingsExtensions.OnComplete<Sequence>(val, val2);
		OnAnalyticEvent(string.Format("숏끟涯攐汘\rº厹숵끝綼弶牏bú叹볥\u0083赴", taskId));
	}

	public void OnMergePorp()
	{
		curIndex++;
		targetComp.OnMergePorp(curIndex);
	}

	public int GetCurPropId()
	{
		return chainList[curIndex].id;
	}

	public GameObject GetTargetNode()
	{
		return ((Component)targetComp).gameObject;
	}

	public void OnStartGuide(Transform parent)
	{
	}

	public void OnEndGuide()
	{
	}

	public bool IsUpTarget(int id)
	{
		return chainList[chainList.Count - 1].id == id;
	}

	public void PlayMergeAni(Vector3 startPos)
	{
		//IL_001f: Unknown result type (might be due to invalid IL or missing references)
		MGFoodMaterialItem mGFoodMaterialItem = chainList[chainList.Count - 1];
		gamePlay.PlayMergeAni(startPos, mGFoodMaterialItem.icon, mGFoodMaterialItem.id);
	}

	private void OnAnalyticEvent(string step)
	{
		Dictionary<string, object> dictionary = new Dictionary<string, object>();
		dictionary.Add("숉끥澸渊杀;Â叁", "刖棫\ud9dbń");
		dictionary.Add("녧剟✈\0造\ud972", step);
		MGKitchenGameManager.GetInstance().OnAnalyticEvent("숃끥掴漄杚;\u0092厑匫橫ā讹酧", dictionary);
	}
}
