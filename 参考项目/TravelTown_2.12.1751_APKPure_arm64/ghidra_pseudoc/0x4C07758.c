/* Ghidra 12.1.2 native pseudocode; RVA 0x4C07758; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.<GetToolGraphsFromItems>b__25_0; status ok */


ulong MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T____GetToolGraphsFromItems_b__25_0
                (long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  ulong *puVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000007e1ae94 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    bRam0000000007e1ae94 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    plVar11 = *(long **)(param_1 + 0x40);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779820) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04d077f0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x03256b10(param_2);
LAB_04d077f0:
    uVar5 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_04d0785c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,4);
LAB_04d0785c:
                    /* WARNING: Could not recover jumptable at 0x04d07870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar9 = (*(code *)*puVar4)(plVar11,uVar5,puVar4[1]);
      return uVar9;
    }
  }
  auVar13 = func_0x03280cac();
  if ((bRam0000000007e1ae95 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780148);
    bRam0000000007e1ae95 = 1;
  }
  lVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48))
                    (auVar13._0_8_);
  if (lVar8 != 0) {
    uVar3 = func_0x04fb62d8(lVar8,auVar13._8_8_,
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)PTR_DAT_07780148 + 0x20) + 0xc0) + 0x110)
                           );
    return (ulong)(~uVar3 >> 0x1f);
  }
  auVar13 = func_0x03280cac();
  if ((bRam0000000007e1ae96 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c6f0);
    bRam0000000007e1ae96 = 1;
  }
  puVar1 = PTR_DAT_0777c6f0;
  puVar12 = (ulong *)(auVar13._0_8_ + 0x30);
  uVar9 = *puVar12;
  do {
    lVar8 = func_0x057ddb20(uVar9,auVar13._8_8_,0);
    if (lVar8 == 0) {
      lVar6 = 0;
    }
    else {
      uVar5 = *(undefined8 *)puVar1;
      lVar6 = func_0x03280b90(lVar8,uVar5);
      if (lVar6 == 0) {
        auVar13 = func_0x03281048(lVar8,uVar5);
        if ((bRam0000000007e1ae97 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c6f0);
          bRam0000000007e1ae97 = 1;
        }
        puVar1 = PTR_DAT_0777c6f0;
        puVar12 = (ulong *)(auVar13._0_8_ + 0x30);
        uVar9 = *puVar12;
        do {
          lVar8 = func_0x057ddd18(uVar9,auVar13._8_8_,0);
          if (lVar8 == 0) {
            lVar6 = 0;
          }
          else {
            uVar5 = *(undefined8 *)puVar1;
            lVar6 = func_0x03280b90(lVar8,uVar5);
            if (lVar6 == 0) {
              auVar13 = func_0x03281048(lVar8,uVar5);
              if ((bRam0000000007e1ae98 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777c6f8);
                bRam0000000007e1ae98 = 1;
              }
              puVar1 = PTR_DAT_0777c6f8;
              puVar12 = (ulong *)(auVar13._0_8_ + 0x38);
              uVar9 = *puVar12;
              do {
                lVar8 = func_0x057ddb20(uVar9,auVar13._8_8_,0);
                if (lVar8 == 0) {
                  lVar6 = 0;
                }
                else {
                  uVar5 = *(undefined8 *)puVar1;
                  lVar6 = func_0x03280b90(lVar8,uVar5);
                  if (lVar6 == 0) {
                    auVar13 = func_0x03281048(lVar8,uVar5);
                    if ((bRam0000000007e1ae99 & 1) == 0) {
                      func_0x03280a18(PTR_DAT_0777c6f8);
                      bRam0000000007e1ae99 = 1;
                    }
                    puVar1 = PTR_DAT_0777c6f8;
                    puVar12 = (ulong *)(auVar13._0_8_ + 0x38);
                    uVar9 = *puVar12;
                    do {
                      lVar8 = func_0x057ddd18(uVar9,auVar13._8_8_,0);
                      if (lVar8 == 0) {
                        lVar6 = 0;
                      }
                      else {
                        uVar5 = *(undefined8 *)puVar1;
                        lVar6 = func_0x03280b90(lVar8,uVar5);
                        if (lVar6 == 0) {
                          auVar13 = func_0x03281048(lVar8,uVar5);
                          puVar1 = PTR_DAT_0777eb98;
                          plVar11 = auVar13._0_8_;
                          if ((bRam0000000007e1ae9a & 1) == 0) {
                            func_0x03280a18(PTR_DAT_0777eb98);
                            bRam0000000007e1ae9a = 1;
                          }
                          uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
                          func_0x054221d4(uVar5,plVar11,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(auVar13._8_8_ + 0x20) + 0xc0) + 8),0
                                         );
                          (**(code **)(*plVar11 + 0x238))
                                    (plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x240));
                    /* WARNING: Could not recover jumptable at 0x04d07c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar9 = (**(code **)(*plVar11 + 600))
                                            (plVar11,*(undefined8 *)(*plVar11 + 0x260));
                          return uVar9;
                        }
                      }
                      uVar7 = func_0x032dd140(puVar12,lVar6,uVar9);
                      bVar2 = uVar9 != uVar7;
                      uVar9 = uVar7;
                    } while (bVar2);
                    return uVar7;
                  }
                }
                uVar7 = func_0x032dd140(puVar12,lVar6,uVar9);
                bVar2 = uVar9 == uVar7;
                uVar9 = uVar7;
                if (bVar2) {
                  return uVar7;
                }
              } while( true );
            }
          }
          uVar7 = func_0x032dd140(puVar12,lVar6,uVar9);
          bVar2 = uVar9 == uVar7;
          uVar9 = uVar7;
          if (bVar2) {
            return uVar7;
          }
        } while( true );
      }
    }
    uVar7 = func_0x032dd140(puVar12,lVar6,uVar9);
    bVar2 = uVar9 == uVar7;
    uVar9 = uVar7;
    if (bVar2) {
      return uVar7;
    }
  } while( true );
}

