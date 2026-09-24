//Type is in global namespace

public class AutoItemProducer : ItemProducer
{
	[CompilerGenerated]
	private sealed class <TryToProduce>d__12 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public AutoItemProducer <>4__this; //Field offset: 0x20

		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <TryToProduce>d__12(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private IEnumerator _autoProduceCoroutine; //Field offset: 0xC8

	public virtual bool consumeEnergy
	{
		 get { } //Length: 8
	}

	protected virtual int dropPlaceDegree
	{
		 get { } //Length: 8
	}

	public AutoItemProducer() { }

	public virtual bool get_consumeEnergy() { }

	protected virtual int get_dropPlaceDegree() { }

	public virtual void Init(BaseItem producerBaseItem, ItemProducerData itemProducerData, ItemProducerTimer itemProducerTimer, GameObject energyIcon, bool startOnInit, ActiveItemProducerData activeItemProducerInitData = null, ParticleSystemController producerParticles = null) { }

	protected virtual void OnProduceFailed(ProduceFailTypes produceFailType) { }

	protected virtual void OnProduceSucceed(BaseItem producedItem) { }

	protected virtual void OnRechargeEnded(bool isSpeedUpUsed = false) { }

	public virtual void ResumeProductionCoroutines() { }

	public virtual void StopProductionCoroutines() { }

	private void StopTryToProduceCoroutine() { }

	[IteratorStateMachine(typeof(<TryToProduce>d__12))]
	private IEnumerator TryToProduce() { }

}

