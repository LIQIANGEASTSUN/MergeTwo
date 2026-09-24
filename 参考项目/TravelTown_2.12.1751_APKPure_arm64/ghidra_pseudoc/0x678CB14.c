/* Ghidra 12.1.2 native pseudocode; RVA 0x678CB14; MergeEngine.ECS.Systems.Items.ConsumableDropSystem.SpawnConsumable; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
MergeEngine_ECS_Systems_Items_ConsumableDropSystem__SpawnConsumable
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5
          )

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_077730b8;
  if ((bRam0000000007e28d4d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc678);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077730f8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_0777e5d0);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e28d4d = 1;
  }
  *param_5 = 0;
  func_0x032809c4(param_5,0);
  plVar9 = *(long **)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar2 = (long *)func_0x0624cb20(param_2,0);
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779818) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0688cc50;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar2,*(long *)PTR_DAT_07779818,0);
LAB_0688cc50:
    uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077730f8) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0688ccb8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077730f8,0);
LAB_0688ccb8:
      plVar9 = (long *)(*(code *)*puVar3)(plVar9,uVar4,puVar3[1]);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0688cd24;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777c248,0);
LAB_0688cd24:
        lVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        puVar1 = PTR_DAT_0777e5d0;
        if (lVar6 != 0) {
          uVar4 = func_0x0414419c(lVar6,0,*(undefined8 *)PTR_DAT_0777e510);
          uStack_48 = 0;
          func_0x0437ba9c(&uStack_48,4,*(undefined8 *)puVar1);
          uVar5 = func_0x06a13bc8(param_3,uStack_48,0,0,0);
          plVar9 = *(long **)(param_1 + 0x18);
          if (plVar9 != (long *)0x0) {
            lVar6 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777e5b8) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0688cde0;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777e5b8,0);
LAB_0688cde0:
            uVar5 = (*(code *)*puVar3)(plVar9,uVar4,uVar5,puVar3[1]);
            *param_5 = uVar5;
            func_0x032809c4(param_5,uVar5);
            plVar9 = *(long **)(param_1 + 0x10);
            if (plVar9 != (long *)0x0) {
              lVar6 = *plVar9;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777e5c0) {
                    puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
                    goto LAB_0688ce68;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777e5c0,5);
LAB_0688ce68:
              (*(code *)*puVar3)(plVar9,uVar5,puVar3[1]);
              plVar9 = (long *)func_0x0688c69c(param_1);
              if (plVar9 != (long *)0x0) {
                plVar9 = (long *)(**(code **)(*plVar9 + 0x208))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x210));
                if (plVar9 != (long *)0x0) {
                  lVar6 = *plVar9;
                  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077cc678) {
                        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x1a) * 0x10 + 0x138);
                        goto LAB_0688cef4;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar3 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077cc678,0x1a);
LAB_0688cef4:
                  (*(code *)*puVar3)(_UNK_017be738,plVar9,param_3,param_4,param_3,7,puVar3[1]);
                  return uVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = func_0x03280cac();
  return uVar4;
}

