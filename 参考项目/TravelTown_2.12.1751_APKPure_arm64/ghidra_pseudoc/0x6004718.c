/* Ghidra 12.1.2 native pseudocode; RVA 0x6004718; MergeEngine.Configuration.Definitions.WeakReferences.References.MergeItemWeakReference..ctor; status ok */


void MergeEngine_Configuration_Definitions_WeakReferences_References_MergeItemWeakReference___ctor
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  puVar4 = PTR_DAT_077ced38;
  if ((bRam0000000007e23735 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077ced38);
    bRam0000000007e23735 = 1;
  }
  func_0x0611eb7c(param_1,0,
                  *(undefined8 *)
                   (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0
                                                           ) + 0x30) + 0x20) + 0xc0) + 0x28));
  puVar5 = (undefined8 *)(param_1 + 0x10);
  *puVar5 = param_2;
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

