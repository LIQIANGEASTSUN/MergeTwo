
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016bdad8(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_016be314 + 0x16bdaf4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016be318 + 0x16bdb08));
    func_0x01438628(*(undefined4 *)(_UNK_016be31c + 0x16bdb14));
    func_0x01438628(*(undefined4 *)(_UNK_016be320 + 0x16bdb20));
    func_0x01438628(*(undefined4 *)(_UNK_016be324 + 0x16bdb2c));
    func_0x01438628(*(undefined4 *)(_UNK_016be328 + 0x16bdb38));
    func_0x01438628(*(undefined4 *)(_UNK_016be32c + 0x16bdb44));
    func_0x01438628(*(undefined4 *)(_UNK_016be330 + 0x16bdb50));
    func_0x01438628(*(undefined4 *)(_UNK_016be334 + 0x16bdb5c));
    func_0x01438628(*(undefined4 *)(_UNK_016be338 + 0x16bdb68));
    func_0x01438628(*(undefined4 *)(_UNK_016be33c + 0x16bdb74));
    func_0x01438628(*(undefined4 *)(_UNK_016be340 + 0x16bdb80));
    func_0x01438628(*(undefined4 *)(_UNK_016be344 + 0x16bdb8c));
    func_0x01438628(*(undefined4 *)(_UNK_016be348 + 0x16bdb98));
    func_0x01438628(*(undefined4 *)(_UNK_016be34c + 0x16bdba4));
    func_0x01438628(*(undefined4 *)(_UNK_016be350 + 0x16bdbb0));
    func_0x01438628(*(undefined4 *)(_UNK_016be354 + 0x16bdbbc));
    func_0x01438628(*(undefined4 *)(_UNK_016be358 + 0x16bdbc8));
    func_0x01438628(*(undefined4 *)(_UNK_016be35c + 0x16bdbd4));
    func_0x01438628(*(undefined4 *)(_UNK_016be360 + 0x16bdbe0));
    func_0x01438628(*(undefined4 *)(_UNK_016be364 + 0x16bdbec));
    func_0x01438628(*(undefined4 *)(_UNK_016be368 + 0x16bdbf8));
    func_0x01438628(*(undefined4 *)(_UNK_016be36c + 0x16bdc04));
    func_0x01438628(*(undefined4 *)(_UNK_016be370 + 0x16bdc10));
    func_0x01438628(*(undefined4 *)(_UNK_016be374 + 0x16bdc1c));
    func_0x01438628(*(undefined4 *)(_UNK_016be378 + 0x16bdc28));
    func_0x01438628(*(undefined4 *)(_UNK_016be37c + 0x16bdc34));
    func_0x01438628(*(undefined4 *)(_UNK_016be380 + 0x16bdc40));
    func_0x01438628(*(undefined4 *)(_UNK_016be384 + 0x16bdc4c));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x8929,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016be388 + 0x16bdcb4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016be38c + 0x16bdcd0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_016be390 + 0x16bdcf0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x35c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_016be394 + 0x16bdd24));
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016be398 + 0x16bdd3c));
    func_0x024f108c(iVar1,uVar2,**(undefined4 **)(_UNK_016be39c + 0x16bdd54));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_50 = *(int *)(iVar1 + 0xc) - 1;
    if (-1 < (int)uStack_50) {
      puVar11 = *(undefined4 **)(_UNK_016be3a0 + 0x16bdd84);
      do {
        if (*(int *)(**(int **)(_UNK_016be3a4 + 0x16bdd90) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016be3a8 + 0x16bddac));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04cc(iVar3,**(undefined4 **)(_UNK_016be3ac + 0x16bddcc));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x35c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0152983c(iVar1,uStack_50,**(undefined4 **)(_UNK_016be3b0 + 0x16bde00));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f04d4(iVar3,uVar2,**(undefined4 **)(_UNK_016be3b4 + 0x16bde2c));
        if (*(int *)(**(int **)(_UNK_016be3b8 + 0x16bde44) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = FUN_016bbf24(iVar3);
        if ((param_2 != 0 && iVar4 != 0) && (0 < *(int *)(param_2 + 0xc))) {
          iVar4 = 0;
          do {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar3 + 0x14);
            iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_016be3bc + 0x16bdeb8));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar5 + 8);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f0540(iVar7,uVar2,**(undefined4 **)(_UNK_016be3c0 + 0x16bdef4));
            if (iVar5 == 0) {
              iVar7 = **(int **)(**(int **)(_UNK_016be3cc + 0x16bdf68) + 0x5c);
              iVar5 = func_0x0152983c(param_2,uStack_50,**(undefined4 **)(_UNK_016be3d0 + 0x16bdf78)
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
                iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_016be3d4 + 0x16bdfcc));
                func_0x024f0510(iVar5,**(undefined4 **)(_UNK_016be3d8 + 0x16bdfe0));
                iVar7 = *(int *)(iVar3 + 0x14);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                iVar7 = func_0x024f10dc(iVar7,**(undefined4 **)(_UNK_016be3dc + 0x16be004));
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                func_0x024f10ec(&uStack_48,iVar7,**(undefined4 **)(_UNK_016be3e0 + 0x16be030));
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                while (iVar7 = func_0x0151455c(&uStack_38,*puVar11), uVar2 = uStack_2c, iVar7 != 0)
                {
                  if (*(int *)(**(int **)(_UNK_016be3e4 + 0x16be064) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_016be3e8 + 0x16be084));
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
                    iVar7 = func_0x024f0f34(iVar5,uVar2,**(undefined4 **)(_UNK_016be3ec + 0x16be0e0)
                                           );
                    if (iVar7 == 0) {
                      if (iVar5 == 0) {
                        func_0x014388e4();
                      }
                      iVar7 = *(int *)(iVar5 + 8);
                      uVar9 = *(uint *)(iVar5 + 0xc);
                      piVar6 = *(int **)(_UNK_016be3f0 + 0x16be120);
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
                func_0x024f10fc(&uStack_38,**(undefined4 **)(_UNK_016be3f4 + 0x16be174));
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
                    uVar2 = func_0x024f0530(iVar5,iVar7,**(undefined4 **)(_UNK_016be400 + 0x16be1cc)
                                           );
                    if (iVar10 == 0) {
                      func_0x014388e4();
                    }
                    iVar10 = func_0x024f0540(iVar10,uVar2,
                                             **(undefined4 **)(_UNK_016be404 + 0x16be1f8));
                    if (iVar10 != 0) {
                      iVar10 = *(int *)(iVar3 + 0x14);
                      uVar2 = func_0x024f0530(iVar5,iVar7,
                                              **(undefined4 **)(_UNK_016be408 + 0x16be218));
                      if (iVar10 == 0) {
                        func_0x014388e4();
                      }
                      func_0x024f10d8(iVar10,uVar2,**(undefined4 **)(_UNK_016be40c + 0x16be244));
                    }
                    iVar7 = iVar7 + 1;
                  }
                }
              }
            }
            else {
              iVar7 = *(int *)(iVar3 + 0x14);
              iVar5 = func_0x0152983c(param_2,iVar4,**(undefined4 **)(_UNK_016be3c4 + 0x16bdf14));
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = *(undefined4 *)(iVar5 + 8);
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              func_0x024f10d8(iVar7,uVar2,**(undefined4 **)(_UNK_016be3c8 + 0x16bdf50));
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_2 + 0xc));
        }
        uStack_50 = uStack_50 - 1;
      } while (uStack_50 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8929,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
  }
  return;
}

