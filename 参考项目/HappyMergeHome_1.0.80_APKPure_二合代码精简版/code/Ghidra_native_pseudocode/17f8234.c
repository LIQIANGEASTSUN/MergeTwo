
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01808234(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_01808a70 + 0x1808250);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01808a74 + 0x1808264));
    func_0x01438628(*(undefined4 *)(_UNK_01808a78 + 0x1808270));
    func_0x01438628(*(undefined4 *)(_UNK_01808a7c + 0x180827c));
    func_0x01438628(*(undefined4 *)(_UNK_01808a80 + 0x1808288));
    func_0x01438628(*(undefined4 *)(_UNK_01808a84 + 0x1808294));
    func_0x01438628(*(undefined4 *)(_UNK_01808a88 + 0x18082a0));
    func_0x01438628(*(undefined4 *)(_UNK_01808a8c + 0x18082ac));
    func_0x01438628(*(undefined4 *)(_UNK_01808a90 + 0x18082b8));
    func_0x01438628(*(undefined4 *)(_UNK_01808a94 + 0x18082c4));
    func_0x01438628(*(undefined4 *)(_UNK_01808a98 + 0x18082d0));
    func_0x01438628(*(undefined4 *)(_UNK_01808a9c + 0x18082dc));
    func_0x01438628(*(undefined4 *)(_UNK_01808aa0 + 0x18082e8));
    func_0x01438628(*(undefined4 *)(_UNK_01808aa4 + 0x18082f4));
    func_0x01438628(*(undefined4 *)(_UNK_01808aa8 + 0x1808300));
    func_0x01438628(*(undefined4 *)(_UNK_01808aac + 0x180830c));
    func_0x01438628(*(undefined4 *)(_UNK_01808ab0 + 0x1808318));
    func_0x01438628(*(undefined4 *)(_UNK_01808ab4 + 0x1808324));
    func_0x01438628(*(undefined4 *)(_UNK_01808ab8 + 0x1808330));
    func_0x01438628(*(undefined4 *)(_UNK_01808abc + 0x180833c));
    func_0x01438628(*(undefined4 *)(_UNK_01808ac0 + 0x1808348));
    func_0x01438628(*(undefined4 *)(_UNK_01808ac4 + 0x1808354));
    func_0x01438628(*(undefined4 *)(_UNK_01808ac8 + 0x1808360));
    func_0x01438628(*(undefined4 *)(_UNK_01808acc + 0x180836c));
    func_0x01438628(*(undefined4 *)(_UNK_01808ad0 + 0x1808378));
    func_0x01438628(*(undefined4 *)(_UNK_01808ad4 + 0x1808384));
    func_0x01438628(*(undefined4 *)(_UNK_01808ad8 + 0x1808390));
    func_0x01438628(*(undefined4 *)(_UNK_01808adc + 0x180839c));
    func_0x01438628(*(undefined4 *)(_UNK_01808ae0 + 0x18083a8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x90d1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01808ae4 + 0x1808410) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01808ae8 + 0x180842c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01808aec + 0x180844c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x238);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01808af0 + 0x1808480));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01808af4 + 0x1808498));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_01808af8 + 0x18084b0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_01808afc + 0x18084e0);
      do {
        if (*(int *)(**(int **)(_UNK_01808b00 + 0x18084ec) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01808b04 + 0x1808508));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x036c7bec(iVar3,**(undefined4 **)(_UNK_01808b08 + 0x1808528));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x238);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uStack_50,**(undefined4 **)(_UNK_01808b0c + 0x180855c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_01808b10 + 0x1808588));
        if (*(int *)(**(int **)(_UNK_01808b14 + 0x18085a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_01806680(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01808b18 + 0x1808614));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_01808b1c + 0x1808650));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_01808b28 + 0x18086c4) + 0x5c);
              iVar5 = func_0x0152983c(param_2,uStack_50,**(undefined4 **)(_UNK_01808b2c + 0x18086d4)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01808b30 + 0x1808728));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_01808b34 + 0x180873c));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_01808b38 + 0x1808760));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_01808b3c + 0x180878c));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_01808b40 + 0x18087c0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01808b44 + 0x18087e0));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_01808b48 + 0x180883c)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_01808b4c + 0x180887c);
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
                        func_0x024f0520(iVar5,uVar2,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
                      }
                    }
                  }
                }
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_01808b50 + 0x18088d0));
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
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_01808b5c + 0x1808928)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0540(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_01808b60 + 0x1808954));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_01808b64 + 0x1808974));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar10,uVar2,**(undefined4 **)(_UNK_01808b68 + 0x18089a0));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_01808b20 + 0x1808670));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_01808b24 + 0x18086ac));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x90d1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

