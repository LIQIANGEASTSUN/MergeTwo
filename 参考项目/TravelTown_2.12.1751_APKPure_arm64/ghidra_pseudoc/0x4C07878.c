/* Ghidra 12.1.2 native pseudocode; RVA 0x4C07878; MergeEngine.ECS.Systems.Items.BaseToolAnalysisSystem<T>.<GetToolGraphsFromItems>b__25_1; status ok */


ulong MergeEngine_ECS_Systems_Items_BaseToolAnalysisSystem_T____GetToolGraphsFromItems_b__25_1
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000007e1ae95 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780148);
    bRam0000000007e1ae95 = 1;
  }
  lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48))(param_1);
  if (lVar4 != 0) {
    uVar3 = func_0x04fb62d8(lVar4,param_2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(*(long *)PTR_DAT_07780148 + 0x20) + 0xc0) + 0x110)
                           );
    return (ulong)(~uVar3 >> 0x1f);
  }
  auVar11 = func_0x03280cac();
  if ((bRam0000000007e1ae96 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c6f0);
    bRam0000000007e1ae96 = 1;
  }
  puVar1 = PTR_DAT_0777c6f0;
  puVar9 = (ulong *)(auVar11._0_8_ + 0x30);
  uVar8 = *puVar9;
  do {
    lVar4 = func_0x057ddb20(uVar8,auVar11._8_8_,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar10 = *(undefined8 *)puVar1;
      lVar5 = func_0x03280b90(lVar4,uVar10);
      if (lVar5 == 0) {
        auVar11 = func_0x03281048(lVar4,uVar10);
        if ((bRam0000000007e1ae97 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777c6f0);
          bRam0000000007e1ae97 = 1;
        }
        puVar1 = PTR_DAT_0777c6f0;
        puVar9 = (ulong *)(auVar11._0_8_ + 0x30);
        uVar8 = *puVar9;
        do {
          lVar4 = func_0x057ddd18(uVar8,auVar11._8_8_,0);
          if (lVar4 == 0) {
            lVar5 = 0;
          }
          else {
            uVar10 = *(undefined8 *)puVar1;
            lVar5 = func_0x03280b90(lVar4,uVar10);
            if (lVar5 == 0) {
              auVar11 = func_0x03281048(lVar4,uVar10);
              if ((bRam0000000007e1ae98 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777c6f8);
                bRam0000000007e1ae98 = 1;
              }
              puVar1 = PTR_DAT_0777c6f8;
              puVar9 = (ulong *)(auVar11._0_8_ + 0x38);
              uVar8 = *puVar9;
              do {
                lVar4 = func_0x057ddb20(uVar8,auVar11._8_8_,0);
                if (lVar4 == 0) {
                  lVar5 = 0;
                }
                else {
                  uVar10 = *(undefined8 *)puVar1;
                  lVar5 = func_0x03280b90(lVar4,uVar10);
                  if (lVar5 == 0) {
                    auVar11 = func_0x03281048(lVar4,uVar10);
                    if ((bRam0000000007e1ae99 & 1) == 0) {
                      func_0x03280a18(PTR_DAT_0777c6f8);
                      bRam0000000007e1ae99 = 1;
                    }
                    puVar1 = PTR_DAT_0777c6f8;
                    puVar9 = (ulong *)(auVar11._0_8_ + 0x38);
                    uVar8 = *puVar9;
                    do {
                      lVar4 = func_0x057ddd18(uVar8,auVar11._8_8_,0);
                      if (lVar4 == 0) {
                        lVar5 = 0;
                      }
                      else {
                        uVar10 = *(undefined8 *)puVar1;
                        lVar5 = func_0x03280b90(lVar4,uVar10);
                        if (lVar5 == 0) {
                          auVar11 = func_0x03281048(lVar4,uVar10);
                          puVar1 = PTR_DAT_0777eb98;
                          plVar7 = auVar11._0_8_;
                          if ((bRam0000000007e1ae9a & 1) == 0) {
                            func_0x03280a18(PTR_DAT_0777eb98);
                            bRam0000000007e1ae9a = 1;
                          }
                          uVar10 = func_0x03280ca0(*(undefined8 *)puVar1);
                          func_0x054221d4(uVar10,plVar7,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(auVar11._8_8_ + 0x20) + 0xc0) + 8),0
                                         );
                          (**(code **)(*plVar7 + 0x238))
                                    (plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x240));
                    /* WARNING: Could not recover jumptable at 0x04d07c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar8 = (**(code **)(*plVar7 + 600))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x260));
                          return uVar8;
                        }
                      }
                      uVar6 = func_0x032dd140(puVar9,lVar5,uVar8);
                      bVar2 = uVar8 != uVar6;
                      uVar8 = uVar6;
                    } while (bVar2);
                    return uVar6;
                  }
                }
                uVar6 = func_0x032dd140(puVar9,lVar5,uVar8);
                bVar2 = uVar8 == uVar6;
                uVar8 = uVar6;
                if (bVar2) {
                  return uVar6;
                }
              } while( true );
            }
          }
          uVar6 = func_0x032dd140(puVar9,lVar5,uVar8);
          bVar2 = uVar8 == uVar6;
          uVar8 = uVar6;
          if (bVar2) {
            return uVar6;
          }
        } while( true );
      }
    }
    uVar6 = func_0x032dd140(puVar9,lVar5,uVar8);
    bVar2 = uVar8 == uVar6;
    uVar8 = uVar6;
    if (bVar2) {
      return uVar6;
    }
  } while( true );
}

