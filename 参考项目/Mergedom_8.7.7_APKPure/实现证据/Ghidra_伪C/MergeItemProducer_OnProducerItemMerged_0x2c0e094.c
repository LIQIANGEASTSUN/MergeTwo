
bool Exact_MergeItemProducer_OnProducerItemMerged_0x2c0e094(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_48;
  
  if ((bRam0000000006812bed & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f9ed8);
    func_0x02ad6de0(PTR_DAT_063f3f20);
    func_0x02ad6de0(PTR_DAT_063f9e90);
    func_0x02ad6de0(PTR_DAT_063f0f18);
    func_0x02ad6de0(PTR_DAT_063fa0d8);
    func_0x02ad6de0(PTR_DAT_063fa3c0);
    bRam0000000006812bed = 1;
  }
  lVar8 = *(long *)(param_1 + 0x40);
  lStack_58 = 0;
  plStack_48 = (long *)0x0;
  if (lVar8 != 0) {
    cVar3 = *(char *)(lVar8 + 0x35);
    if (cVar3 == '\0') {
LAB_02d0e5c4:
      return cVar3 != '\0';
    }
    uVar12 = *(undefined8 *)(lVar8 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_063f0f18 + 0xe4) == 0) {
      func_0x02ad6f5c();
    }
    uVar6 = func_0x05c4a644(uVar12,0);
    if ((uVar6 & 1) == 0) {
      if ((param_2 != 0) && (*(long *)(param_2 + 0x58) != 0)) {
        Recovered_BoardSlot_SetItem_0x02B9F90C(*(long *)(param_2 + 0x58),0,1,0);
        lVar8 = *(long *)(param_1 + 0x68);
        lVar9 = *(long *)(param_1 + 200);
        lStack_58 = 0;
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x50) != 0)) {
          uStack_60 = CONCAT44(*(undefined4 *)(lVar8 + 0x44),
                               *(undefined4 *)(*(long *)(lVar8 + 0x50) + 0x30));
          lStack_58 = lVar8;
          func_0x02ad6d8c(&lStack_58);
          if (lVar9 != 0) {
            func_0x03723690(lVar9,uStack_60,lStack_58,*(undefined8 *)PTR_DAT_063fa3c0);
            plVar13 = *(long **)(param_1 + 0x18);
            if (plVar13 != (long *)0x0) {
              lVar8 = *plVar13;
              uVar12 = *(undefined8 *)(param_1 + 0x68);
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_063f3f20) {
                    puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                    goto LAB_02d0e3f4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)func_0x02b0e364(plVar13,*(long *)PTR_DAT_063f3f20,3);
LAB_02d0e3f4:
              (*(code *)*puVar7)(plVar13,uVar12,1,puVar7[1]);
              plVar13 = *(long **)(param_1 + 0x20);
              if (plVar13 != (long *)0x0) {
                lVar8 = *plVar13;
                uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar6 != 0) {
                  piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_063f9ed8) {
                      puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                      goto LAB_02d0e468;
                    }
                    uVar6 = uVar6 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar6 != 0);
                }
                puVar7 = (undefined8 *)func_0x02b0e364(plVar13,*(long *)PTR_DAT_063f9ed8,2);
LAB_02d0e468:
                (*(code *)*puVar7)(plVar13,0,puVar7[1]);
                goto LAB_02d0e5c4;
              }
            }
          }
        }
      }
    }
    else {
      lVar8 = func_0x02ca1084(0);
      if (lVar8 != 0) {
        func_0x02ca10d0(*(undefined8 *)(lVar8 + 0x130),0);
        puVar4 = PTR_DAT_063f3f20;
        if (((*(long *)(param_1 + 0x40) != 0) &&
            (lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x38), lVar8 != 0)) &&
           (plVar13 = *(long **)(param_1 + 0x18), plVar13 != (long *)0x0)) {
          lVar9 = *plVar13;
          uVar1 = *(undefined4 *)(lVar8 + 0x30);
          uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_063f3f20) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_02d0e2a0;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)func_0x02b0e364(plVar13,*(long *)PTR_DAT_063f3f20,1);
LAB_02d0e2a0:
          plVar13 = (long *)(*(code *)*puVar7)(plVar13,uVar1,puVar7[1]);
          if ((*(long *)(param_1 + 0x40) != 0) && (plVar13 != (long *)0x0)) {
            (**(code **)(*plVar13 + 0x178))
                      (plVar13,0,*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x40),
                       *(undefined8 *)(*plVar13 + 0x180));
            TailTarget_2bf40d4(plVar13,1,0,0);
            lVar8 = func_0x05c3f95c(plVar13,0);
            if (cRam00000000068121d9 == '\0') {
              func_0x02ad6de0(PTR_DAT_063f11b8);
              cRam00000000068121d9 = '\x01';
            }
            if (lVar8 != 0) {
              puVar10 = *(undefined4 **)(*(long *)PTR_DAT_063f11b8 + 0xb8);
              func_0x05c54f44(*puVar10,puVar10[1],puVar10[2],lVar8,0);
              puVar5 = PTR_DAT_063f9e90;
              lVar8 = *(long *)PTR_DAT_063f9e90;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                func_0x02ad6f5c();
                lVar8 = *(long *)puVar5;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
              if (lVar8 != 0) {
                (**(code **)(lVar8 + 0x18))
                          (*(undefined8 *)(lVar8 + 0x40),plVar13,0,*(undefined8 *)(lVar8 + 0x28));
                if (((plVar13[10] != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
                   (plVar14 = *(long **)(param_1 + 0x18), plVar14 != (long *)0x0)) {
                  lVar9 = *plVar14;
                  uVar1 = *(undefined4 *)(plVar13[10] + 0x30);
                  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x40);
                  lVar8 = *(long *)puVar4;
                  uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar6 != 0) {
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) == lVar8) {
                        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                        goto LAB_02d0e48c;
                      }
                      uVar6 = uVar6 - 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar7 = (undefined8 *)func_0x02b0e364(plVar14,lVar8,8);
LAB_02d0e48c:
                  (*(code *)*puVar7)(plVar14,uVar1,uVar2,puVar7[1]);
                  if ((param_2 != 0) && (*(long *)(param_2 + 0x58) != 0)) {
                    Recovered_BoardSlot_SetItem_0x02B9F90C(*(long *)(param_2 + 0x58),plVar13,1,0);
                    lVar8 = *(long *)(param_1 + 200);
                    lStack_58 = 0;
                    if (*(long *)(param_2 + 0x50) != 0) {
                      lStack_58 = *(long *)(param_1 + 0x68);
                      uStack_60 = CONCAT44(*(undefined4 *)(param_2 + 0x44),
                                           *(undefined4 *)(*(long *)(param_2 + 0x50) + 0x30));
                      func_0x02ad6d8c(&lStack_58);
                      if (lVar8 != 0) {
                        func_0x03723690(lVar8,uStack_60,lStack_58,*(undefined8 *)PTR_DAT_063fa3c0);
                        lVar8 = *(long *)(param_1 + 200);
                        plStack_48 = plVar13;
                        func_0x02ad6d8c(&plStack_48,plVar13);
                        if (lVar8 != 0) {
                          func_0x03723314(lVar8,plStack_48,*(undefined8 *)PTR_DAT_063fa0d8);
                          plVar14 = *(long **)(param_1 + 0x18);
                          if (plVar14 != (long *)0x0) {
                            lVar9 = *plVar14;
                            uVar12 = *(undefined8 *)(param_1 + 0x68);
                            lVar8 = *(long *)puVar4;
                            uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                            if (uVar6 != 0) {
                              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar11 + -2) == lVar8) {
                                  puVar7 = (undefined8 *)
                                           (lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                                  goto LAB_02d0e594;
                                }
                                uVar6 = uVar6 - 1;
                                piVar11 = piVar11 + 4;
                              } while (uVar6 != 0);
                            }
                            puVar7 = (undefined8 *)func_0x02b0e364(plVar14,lVar8,3);
LAB_02d0e594:
                            (*(code *)*puVar7)(plVar14,uVar12,0,puVar7[1]);
                            lVar8 = func_0x05c3fa2c(plVar13,0);
                            if (lVar8 != 0) {
                              func_0x05c44378(lVar8,1,0);
                              goto LAB_02d0e5c4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

