
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031bea78(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_031bf2b4 + 0x31bea94);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031bf2b8 + 0x31beaa8));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2bc + 0x31beab4));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2c0 + 0x31beac0));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2c4 + 0x31beacc));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2c8 + 0x31bead8));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2cc + 0x31beae4));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2d0 + 0x31beaf0));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2d4 + 0x31beafc));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2d8 + 0x31beb08));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2dc + 0x31beb14));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2e0 + 0x31beb20));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2e4 + 0x31beb2c));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2e8 + 0x31beb38));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2ec + 0x31beb44));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2f0 + 0x31beb50));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2f4 + 0x31beb5c));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2f8 + 0x31beb68));
    func_0x01438628(*(undefined4 *)(_UNK_031bf2fc + 0x31beb74));
    func_0x01438628(*(undefined4 *)(_UNK_031bf300 + 0x31beb80));
    func_0x01438628(*(undefined4 *)(_UNK_031bf304 + 0x31beb8c));
    func_0x01438628(*(undefined4 *)(_UNK_031bf308 + 0x31beb98));
    func_0x01438628(*(undefined4 *)(_UNK_031bf30c + 0x31beba4));
    func_0x01438628(*(undefined4 *)(_UNK_031bf310 + 0x31bebb0));
    func_0x01438628(*(undefined4 *)(_UNK_031bf314 + 0x31bebbc));
    func_0x01438628(*(undefined4 *)(_UNK_031bf318 + 0x31bebc8));
    func_0x01438628(*(undefined4 *)(_UNK_031bf31c + 0x31bebd4));
    func_0x01438628(*(undefined4 *)(_UNK_031bf320 + 0x31bebe0));
    func_0x01438628(*(undefined4 *)(_UNK_031bf324 + 0x31bebec));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x7d20,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031bf328 + 0x31bec54) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031bf32c + 0x31bec70));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_031bf330 + 0x31bec90));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x308);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_031bf334 + 0x31becc4));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031bf338 + 0x31becdc));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_031bf33c + 0x31becf4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_031bf340 + 0x31bed24);
      do {
        if (*(int *)(**(int **)(_UNK_031bf344 + 0x31bed30) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_031bf348 + 0x31bed4c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_031bf34c + 0x31bed6c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x308);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_031bf350 + 0x31beda0));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_031bf354 + 0x31bedcc));
        if (*(int *)(**(int **)(_UNK_031bf358 + 0x31bede4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_031bcec4(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_031bf35c + 0x31bee58));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_031bf360 + 0x31bee94));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_031bf36c + 0x31bef08) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_031bf370 + 0x31bef18)
                                     );
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_031bf374 + 0x31bef6c));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_031bf378 + 0x31bef80));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_031bf37c + 0x31befa4));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_031bf380 + 0x31befd0));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_031bf384 + 0x31bf004) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_031bf388 + 0x31bf024));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = func_0x029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_031bf38c + 0x31bf080)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_031bf390 + 0x31bf0c0);
                      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                      iVar10 = *piVar6;
                      if (iVar7 == 0) {
                        func_0x014388e4();
                      }
                      if (uVar9 < *(uint *)(iVar7 + 0xc)) {
                        *(uint *)(iVar5 + 0xc) = uVar9 + 1;
                        *(undefined4 *)(iVar7 + uVar9 * 4 + 0x10) = uVar2;
                      }
                      else {
                        func_0x04cd29cc(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_031bf394 + 0x31bf114));
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                if (0 < *(int *)(iVar5 + 0xc)) {
                  iVar7 = 0;
                  while( true ) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar5 + 0xc) <= iVar7) break;
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = *(int *)(iVar3 + 0x14);
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_031bf3a0 + 0x31bf16c)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_031bf3a4 + 0x31bf198));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_031bf3a8 + 0x31bf1b8));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_031bf3ac + 0x31bf1e4));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_031bf364 + 0x31beeb4));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_031bf368 + 0x31beef0));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x7d20,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

