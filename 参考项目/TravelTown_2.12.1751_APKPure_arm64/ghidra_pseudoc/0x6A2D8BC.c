/* Ghidra 12.1.2 native pseudocode; RVA 0x6A2D8BC; MergeEngine.Configuration.Definitions.Reward.RequiresTapToClaimPopup; status ok */


ulong MergeEngine_Configuration_Definitions_Reward__RequiresTapToClaimPopup(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((bRam0000000007e2a469 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d9318);
    func_0x03280a18(PTR_DAT_0777b2c0);
    func_0x03280a18(PTR_DAT_077801d0);
    bRam0000000007e2a469 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) < 1) {
      uVar5 = 0;
    }
    else if (*(int *)(lVar6 + 0x18) == 1) {
      plVar7 = (long *)func_0x03d409f4(lVar6,*(undefined8 *)PTR_DAT_077d9318);
      if (plVar7 == (long *)0x0) goto LAB_06b2d9b8;
      lVar6 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777b2c0) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_06b2d998;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777b2c0,3);
LAB_06b2d998:
      uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar5 = uVar5 ^ 1;
    }
    else {
      uVar5 = 1;
    }
    return (ulong)(uVar5 & 1);
  }
LAB_06b2d9b8:
  func_0x03280cac();
  puVar4 = PTR_DAT_0782f180;
  if ((bRam0000000007e2a46a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f180);
    bRam0000000007e2a46a = 1;
  }
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x057da5fc(uVar9,0);
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar9;
  uVar10 = *(ulong *)(*(long *)puVar4 + 0xb8);
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)((uVar10 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (uVar10 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return uVar10;
}

