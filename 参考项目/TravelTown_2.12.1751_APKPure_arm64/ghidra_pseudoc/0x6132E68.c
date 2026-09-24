/* Ghidra 12.1.2 native pseudocode; RVA 0x6132E68; MergeEngine.Model.RemoteSpawning.RemoteSpawningModel.SaveToJson; status ok */

/* WARNING: Possible PIC construction at 0x062330ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06233110: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x062330f0) */
/* WARNING: Removing unreachable block (ram,0x06233114) */
/* WARNING: Removing unreachable block (ram,0x06a4bf58) */
/* WARNING: Removing unreachable block (ram,0x069b2efc) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */

undefined1  [16]
MergeEngine_Model_RemoteSpawning_RemoteSpawningModel__SaveToJson(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 extraout_x1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((bRam0000000007e2451c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa18);
    func_0x03280a18(PTR_DAT_0774e5d8);
    bRam0000000007e2451c = 1;
    param_2 = extraout_x1;
  }
  lVar9 = *(long *)(param_1 + 0x48);
  if (lVar9 == 0) {
    auVar12._0_8_ = **(undefined8 **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
    auVar12._8_8_ = param_2;
    return auVar12;
  }
  plVar10 = *(long **)(param_1 + 0x30);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    lVar11 = *(long *)PTR_DAT_077daa18;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_06232f2c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar6 = func_0x03256b10(plVar10);
LAB_06232f2c:
    lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar11);
                    /* WARNING: Could not recover jumptable at 0x06232f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar12 = (**(code **)(lVar6 + 8))(plVar10,lVar9,lVar6);
    return auVar12;
  }
  auVar12 = func_0x03280cac();
  if ((bRam0000000007e2451b & 1) == 0) {
    func_0x03280a18(PTR_DAT_077daa20);
    bRam0000000007e2451b = 1;
  }
  auVar13 = func_0x055fde0c(auVar12._8_8_,0);
  if ((auVar13._0_8_ & 1) != 0) {
    return auVar13;
  }
  plVar10 = *(long **)(auVar12._0_8_ + 0x30);
  if (plVar10 == (long *)0x0) {
    lVar9 = func_0x03280cac();
    puVar5 = PTR_DAT_077daa30;
    puVar4 = PTR_DAT_077daa28;
    if ((bRam0000000007e2451e & 1) == 0) {
      func_0x03280a18(PTR_DAT_077daa30);
      func_0x03280a18(PTR_DAT_077daa28);
      func_0x03280a18(PTR_DAT_0774ecc0);
      func_0x03280a18(PTR_DAT_0774ecb8);
      bRam0000000007e2451e = 1;
    }
    lVar6 = func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x04fe1fa4(lVar6,*(undefined8 *)puVar5);
    plVar10 = (long *)(lVar9 + 0x48);
    *plVar10 = lVar6;
  }
  else {
    lVar9 = *plVar10;
    lVar6 = *(long *)PTR_DAT_077daa20;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar6 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
          goto LAB_06233000;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar9 = func_0x03256b10(plVar10);
LAB_06233000:
    lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar6);
    auVar14 = (**(code **)(lVar9 + 8))(plVar10,auVar12._8_8_,lVar9);
    lVar6 = auVar14._0_8_;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar14._8_8_;
    if (lVar6 == 0) {
      return auVar13 << 0x40;
    }
    plVar10 = (long *)(auVar12._0_8_ + 0x48);
    *plVar10 = lVar6;
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  auVar14._8_8_ = lVar6;
  auVar14._0_8_ = plVar10;
  return auVar14;
}

