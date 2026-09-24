/* Ghidra 12.1.2 native pseudocode; RVA 0x3D408CC; Merger.Services.Backend.WebSocket.OperationTrackingSystem.TrackItemMovedBetweenInventoryTabsOperation<object>; status ok */


undefined8
Merger_Services_Backend_WebSocket_OperationTrackingSystem__TrackItemMovedBetweenInventoryTabsOperation_object_
          (long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  puVar2 = PTR_DAT_0777ab00;
  puVar1 = PTR_DAT_0777aaf8;
  if ((bRam0000000007e17dbe & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777aaf8);
    func_0x03280a18(PTR_DAT_0777ab00);
    func_0x03280a18(PTR_DAT_0777ab08);
    func_0x03280a18(PTR_DAT_0777ab10);
    bRam0000000007e17dbe = 1;
  }
  plVar10 = *(long **)(param_1 + 0x40);
  uVar3 = func_0x03d2c6a8(param_2,*(undefined8 *)puVar1);
  uVar3 = func_0x03d5ffd0(uVar3,*(undefined8 *)puVar2);
  if (plVar10 == (long *)0x0) {
    auVar13 = func_0x03280cac();
    lVar7 = param_3;
    if (*(long *)(param_3 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_0777ab18);
      if (*(long *)(param_3 + 0x38) == 0) {
        func_0x03256878(param_3);
      }
    }
    plVar10 = *(long **)(auVar13._0_8_ + 0x40);
    if (plVar10 == (long *)0x0) {
      auVar13 = func_0x03280cac();
      lVar12 = lVar7;
      if (*(long *)(lVar7 + 0x38) == 0) {
        func_0x03280a18(PTR_DAT_0777ab20);
        if (*(long *)(lVar7 + 0x38) == 0) {
          func_0x03256878(lVar7);
        }
      }
      plVar10 = *(long **)(auVar13._0_8_ + 0x40);
      if (plVar10 == (long *)0x0) {
        auVar13 = func_0x03280cac();
        lVar7 = lVar12;
        lVar6 = param_4;
        if (*(long *)(param_4 + 0x38) == 0) {
          func_0x03280a18(PTR_DAT_077507d0);
          func_0x03280a18(PTR_DAT_0775a958);
          func_0x03280a18(PTR_DAT_07750838);
          func_0x03280a18(PTR_DAT_0777ab28);
          func_0x03280a18(PTR_DAT_07779e90);
          if (*(long *)(param_4 + 0x38) == 0) {
            func_0x03256878(param_4);
          }
        }
        plVar10 = *(long **)(auVar13._0_8_ + 0x40);
        lVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
        func_0x04fe1fa4(lVar4,*(undefined8 *)PTR_DAT_0775a958);
        if (lVar4 != 0) {
          lVar6 = *(long *)PTR_DAT_077507d0;
          func_0x04fe2d7c(lVar4,*(undefined8 *)PTR_DAT_07779e90);
          lVar7 = lVar12;
          if (plVar10 != (long *)0x0) {
            lVar7 = *plVar10;
            lVar12 = *(long *)(*(long *)(param_4 + 0x38) + 8);
            uVar3 = *(undefined8 *)PTR_DAT_0777ab28;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
                  lVar7 = lVar7 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_03e40cdc;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            lVar7 = func_0x03256b10(plVar10);
LAB_03e40cdc:
            lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (**(code **)(lVar7 + 8))(plVar10,uVar3,auVar13._8_8_,lVar4,lVar7);
            return uVar3;
          }
        }
        auVar13 = func_0x03280cac();
        lVar12 = lVar7;
        if (*(long *)(lVar7 + 0x38) == 0) {
          func_0x03280a18(PTR_DAT_0777ab30);
          if (*(long *)(lVar7 + 0x38) == 0) {
            func_0x03256878(lVar7);
          }
        }
        plVar10 = *(long **)(auVar13._0_8_ + 0x40);
        if (plVar10 == (long *)0x0) {
          auVar13 = func_0x03280cac();
          lVar7 = lVar12;
          lVar4 = lVar6;
          if (*(long *)(lVar6 + 0x38) == 0) {
            func_0x03280a18(PTR_DAT_077507d0);
            func_0x03280a18(PTR_DAT_0775a958);
            func_0x03280a18(PTR_DAT_07750838);
            func_0x03280a18(PTR_DAT_07779e90);
            func_0x03280a18(PTR_DAT_0777ab38);
            if (*(long *)(lVar6 + 0x38) == 0) {
              func_0x03256878(lVar6);
            }
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07750838);
          func_0x04fe1fa4(lVar5,*(undefined8 *)PTR_DAT_0775a958);
          if (lVar5 != 0) {
            lVar4 = *(long *)PTR_DAT_077507d0;
            func_0x04fe2d7c(lVar5,*(undefined8 *)PTR_DAT_07779e90,lVar12,lVar4);
            lVar7 = lVar12;
            if (plVar10 != (long *)0x0) {
              lVar7 = *plVar10;
              lVar12 = *(long *)(*(long *)(lVar6 + 0x38) + 8);
              uVar3 = *(undefined8 *)PTR_DAT_0777ab38;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar7 = lVar7 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_03e40f1c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              lVar7 = func_0x03256b10(plVar10);
LAB_03e40f1c:
              lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar3 = (**(code **)(lVar7 + 8))(plVar10,uVar3,auVar13._8_8_,lVar5,lVar7);
              return uVar3;
            }
          }
          auVar13 = func_0x03280cac();
          if (*(long *)(param_6 + 0x38) == 0) {
            func_0x03280a18(PTR_DAT_0777ab40);
            func_0x03280a18(PTR_DAT_0777ab48);
            if (*(long *)(param_6 + 0x38) == 0) {
              func_0x03256878(param_6);
            }
          }
          lVar6 = *(long *)PTR_DAT_0777ab40;
          lVar12 = *(long *)(lVar6 + 0x38);
          if (lVar12 == 0) {
            func_0x03256878(lVar6);
            lVar12 = *(long *)(lVar6 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          lVar12 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = func_0x0325681c();
          }
          uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_6 + 0x38) + 0x10))
                            (auVar13._8_8_,lVar7,**(undefined8 **)(lVar12 + 0xb8));
          uVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ab48);
          func_0x05a85e88(uVar11,auVar13._0_8_,lVar4,param_5 & 0xffffffff,uVar3,0);
          return uVar11;
        }
        lVar12 = *plVar10;
        lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
        uVar3 = *(undefined8 *)PTR_DAT_0777ab30;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
              lVar12 = lVar12 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_03e40dbc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        lVar12 = func_0x03256b10(plVar10);
LAB_03e40dbc:
        lVar7 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x03e40dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar7 + 8))(plVar10,uVar3,auVar13._8_8_,0,lVar7);
        return uVar3;
      }
      lVar12 = *plVar10;
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 8);
      uVar3 = *(undefined8 *)PTR_DAT_0777ab20;
      uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
            lVar12 = lVar12 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
            goto LAB_03e40b7c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar12 = func_0x03256b10(plVar10);
LAB_03e40b7c:
      lVar7 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x03e40bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar7 + 8))(plVar10,uVar3,auVar13._8_8_,0,lVar7);
      return uVar3;
    }
    lVar7 = *plVar10;
    lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    uVar3 = *(undefined8 *)PTR_DAT_0777ab18;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
          lVar7 = lVar7 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
          goto LAB_03e40a9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar7 = func_0x03256b10(plVar10);
LAB_03e40a9c:
    lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e40acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar7 + 8))(plVar10,uVar3,auVar13._8_8_,0,lVar7);
    return uVar3;
  }
  lVar7 = *plVar10;
  lVar12 = *(long *)PTR_DAT_0777ab08;
  uVar11 = *(undefined8 *)PTR_DAT_0777ab10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_03e409bc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar7 = func_0x03256b10(plVar10);
LAB_03e409bc:
  lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x03e409ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(lVar7 + 8))(plVar10,uVar11,uVar3,0,lVar7);
  return uVar3;
}

