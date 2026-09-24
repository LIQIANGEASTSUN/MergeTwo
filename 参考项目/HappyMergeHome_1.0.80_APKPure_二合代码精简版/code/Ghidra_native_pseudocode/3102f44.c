
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03112f44(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_03113780 + 0x3112f60);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03113784 + 0x3112f74));
    func_0x01438628(*(undefined4 *)(_UNK_03113788 + 0x3112f80));
    func_0x01438628(*(undefined4 *)(_UNK_0311378c + 0x3112f8c));
    func_0x01438628(*(undefined4 *)(_UNK_03113790 + 0x3112f98));
    func_0x01438628(*(undefined4 *)(_UNK_03113794 + 0x3112fa4));
    func_0x01438628(*(undefined4 *)(_UNK_03113798 + 0x3112fb0));
    func_0x01438628(*(undefined4 *)(_UNK_0311379c + 0x3112fbc));
    func_0x01438628(*(undefined4 *)(_UNK_031137a0 + 0x3112fc8));
    func_0x01438628(*(undefined4 *)(_UNK_031137a4 + 0x3112fd4));
    func_0x01438628(*(undefined4 *)(_UNK_031137a8 + 0x3112fe0));
    func_0x01438628(*(undefined4 *)(_UNK_031137ac + 0x3112fec));
    func_0x01438628(*(undefined4 *)(_UNK_031137b0 + 0x3112ff8));
    func_0x01438628(*(undefined4 *)(_UNK_031137b4 + 0x3113004));
    func_0x01438628(*(undefined4 *)(_UNK_031137b8 + 0x3113010));
    func_0x01438628(*(undefined4 *)(_UNK_031137bc + 0x311301c));
    func_0x01438628(*(undefined4 *)(_UNK_031137c0 + 0x3113028));
    func_0x01438628(*(undefined4 *)(_UNK_031137c4 + 0x3113034));
    func_0x01438628(*(undefined4 *)(_UNK_031137c8 + 0x3113040));
    func_0x01438628(*(undefined4 *)(_UNK_031137cc + 0x311304c));
    func_0x01438628(*(undefined4 *)(_UNK_031137d0 + 0x3113058));
    func_0x01438628(*(undefined4 *)(_UNK_031137d4 + 0x3113064));
    func_0x01438628(*(undefined4 *)(_UNK_031137d8 + 0x3113070));
    func_0x01438628(*(undefined4 *)(_UNK_031137dc + 0x311307c));
    func_0x01438628(*(undefined4 *)(_UNK_031137e0 + 0x3113088));
    func_0x01438628(*(undefined4 *)(_UNK_031137e4 + 0x3113094));
    func_0x01438628(*(undefined4 *)(_UNK_031137e8 + 0x31130a0));
    func_0x01438628(*(undefined4 *)(_UNK_031137ec + 0x31130ac));
    func_0x01438628(*(undefined4 *)(_UNK_031137f0 + 0x31130b8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x789c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_031137f4 + 0x3113120) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031137f8 + 0x311313c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_031137fc + 0x311315c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x360);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03113800 + 0x3113190));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03113804 + 0x31131a8));
    func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03113808 + 0x31131c0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_0311380c + 0x31131f0);
      do {
        if (*(int *)(**(int **)(_UNK_03113810 + 0x31131fc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03113814 + 0x3113218));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_03113818 + 0x3113238));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x360);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cfd760(iVar1,uStack_50,**(undefined4 **)(_UNK_0311381c + 0x311326c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b73d40(iVar3,uVar2,**(undefined4 **)(_UNK_03113820 + 0x3113298));
        if (*(int *)(**(int **)(_UNK_03113824 + 0x31132b0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_0311139c(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03113828 + 0x3113324));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x046c26fc(iVar7,uVar2,**(undefined4 **)(_UNK_0311382c + 0x3113360));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_03113838 + 0x31133d4) + 0x5c);
              iVar5 = func_0x04cfd760(param_2,uStack_50,**(undefined4 **)(_UNK_0311383c + 0x31133e4)
                                     );
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              iVar5 = FUN_02e651cc(iVar7,uVar2,0);
              if (iVar5 != 0) {
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03113840 + 0x3113438));
                func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_03113844 + 0x311344c));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x046c2140(iVar7,**(undefined4 **)(_UNK_03113848 + 0x3113470));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x04bb113c(&uStack_48,iVar7,**(undefined4 **)(_UNK_0311384c + 0x311349c));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x048a4a78(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_03113850 + 0x31134d0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_03113854 + 0x31134f0));
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  iVar7 = FUN_029a6fa8(iVar7,uVar2,0);
                  if (iVar7 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar7 + 0x1c) - 3U < 3) {
                    if (iVar5 == 0) {
                      func_0x014388e4();
                    }
                    iVar7 = func_0x04cd2d7c(iVar5,uVar2,**(undefined4 **)(_UNK_03113858 + 0x311354c)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_0311385c + 0x311358c);
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
                func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_03113860 + 0x31135e0));
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
                    uVar2 = func_0x04cd26d0(iVar5,iVar7,**(undefined4 **)(_UNK_0311386c + 0x3113638)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x046c26fc(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_03113870 + 0x3113664));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x04cd26d0(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_03113874 + 0x3113684));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x03b70e64(iVar10,uVar2,**(undefined4 **)(_UNK_03113878 + 0x31136b0));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x04cfd760(param_2,iVar4,**(undefined4 **)(_UNK_03113830 + 0x3113380));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x03b70e64(iVar7,uVar2,**(undefined4 **)(_UNK_03113834 + 0x31133bc));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x789c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

