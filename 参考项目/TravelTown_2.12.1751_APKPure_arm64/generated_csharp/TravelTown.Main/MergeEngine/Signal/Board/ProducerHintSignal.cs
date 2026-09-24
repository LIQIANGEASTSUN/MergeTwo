using MergeEngine.Configuration;
using UnityEngine;

namespace MergeEngine.Signal.Board
{
	public class ProducerHintSignal
	{
		public IMergeItem ProducerMergeItem;

		public string ItemUuid { get; }

		public Transform HintTransform { get; }

		public string Source { get; }

		public ProducerHintSignal(IMergeItem producerMergeItem, string itemUuid, Transform hintTransform, string analyticsReason = null)
		{
		}
	}
}
