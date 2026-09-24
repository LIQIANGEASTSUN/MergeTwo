/* Ghidra 12.1.2 native pseudocode; RVA 0x6A1DAE8; MergeEngine.Configuration.Orders.Difficulty.MergeItemUtils.IsSecondaryProducerItem; status ok */


ulong MergeEngine_Configuration_Orders_Difficulty_MergeItemUtils__IsSecondaryProducerItem
                (long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uStack_44;
  
  if ((bRam0000000007e2a3b1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e2a3b1 = 1;
  }
  puVar1 = PTR_DAT_0777e548;
  if (param_1 != (long *)0x0) {
    lVar8 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x1b) * 0x10 + 0x138);
          goto LAB_06b1db7c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_0777e548,0x1b);
LAB_06b1db7c:
    plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xf) * 0x10 + 0x138);
            goto LAB_06b1dbe8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_0777c248,0xf);
LAB_06b1dbe8:
      iVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (iVar3 == 8) {
        lVar8 = *param_1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x1a) * 0x10 + 0x138);
              goto LAB_06b1dc54;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(param_1,*(long *)puVar1,0x1a);
LAB_06b1dc54:
        lVar8 = (*(code *)*puVar4)(param_1,puVar4[1]);
        uVar9 = (ulong)(lVar8 != 0);
      }
      else {
        uVar9 = 0;
      }
      return uVar9;
    }
  }
  lVar8 = func_0x03280cac();
  if ((bRam0000000007e2a3b2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774f828);
    func_0x03280a18(PTR_DAT_0782ea90);
    bRam0000000007e2a3b2 = 1;
  }
  puVar2 = PTR_DAT_0782ea90;
  puVar1 = PTR_DAT_0774f828;
  plVar5 = *(long **)(lVar8 + 0x10);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    uStack_44 = *(undefined4 *)(lVar8 + 0x18);
    uVar7 = func_0x03280b94(*(undefined8 *)puVar1,&uStack_44);
    uVar9 = func_0x055f7edc(*(undefined8 *)puVar2,uVar6,uVar7,0);
    return uVar9;
  }
  uVar9 = func_0x03280cac();
  puVar1 = PTR_DAT_0777e4f0;
  if ((bRam0000000007e2a3b3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e4f0);
    bRam0000000007e2a3b3 = 1;
  }
  uVar6 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x061049d8(uVar6,0);
  *(undefined8 *)(uVar9 + 0x10) = uVar6;
  func_0x032809c4((undefined8 *)(uVar9 + 0x10),uVar6);
  return uVar9;
}

