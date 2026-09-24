/* Ghidra 12.1.2 native pseudocode; RVA 0x63A84BC; MergeEngine.ECS.Systems.Timing.TimeSystem.get_DeltaTimeToProcess; status ok */


undefined8 * MergeEngine_ECS_Systems_Timing_TimeSystem__get_DeltaTimeToProcess(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000007e26201 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e26201 = 1;
  }
  lVar5 = func_0x064b75a0(param_1);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x28) = 1;
    lVar5 = func_0x064b75a0(param_1);
    if (lVar5 != 0) {
      if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774ee08);
      }
      return (undefined8 *)0x0;
    }
  }
  auVar8 = func_0x03280cac();
  lVar5 = auVar8._8_8_;
  puVar6 = auVar8._0_8_;
  if ((bRam0000000007e26178 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077efb08);
    puVar6 = (undefined8 *)func_0x03280a18(PTR_DAT_077f1138);
    bRam0000000007e26178 = 1;
  }
  if (lVar5 != 0) {
    if (0.0 < *(double *)(lVar5 + 0x28)) {
      return puVar6;
    }
    if ((*(long *)(lVar5 + 0x10) != 0) &&
       (lVar5 = func_0x03d203e4(*(long *)(lVar5 + 0x10),*(undefined8 *)PTR_DAT_077efb08), lVar5 != 0
       )) {
      puVar6 = (undefined8 *)(lVar5 + 0x20);
      *puVar6 = *(undefined8 *)PTR_DAT_077f1138;
      if (iRam00000000080486b8 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return puVar6;
    }
  }
  puVar6 = (undefined8 *)func_0x03280cac();
  puVar4 = PTR_DAT_077f1140;
  if ((bRam0000000007e2617a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f1140);
    bRam0000000007e2617a = 1;
  }
  uVar7 = *(undefined8 *)puVar4;
  return puVar6;
}

