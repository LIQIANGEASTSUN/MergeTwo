
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01daacbc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x3ec2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3ec2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uVar3 = func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar4,0,0);
    return uVar3;
  }
  pcVar5 = (char *)(_UNK_01dab3dc + 0x1daad78);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01dab3e0 + 0x1daad8c));
    func_0x01438628(*(undefined4 *)(_UNK_01dab3e4 + 0x1daad98));
    func_0x01438628(*(undefined4 *)(_UNK_01dab3e8 + 0x1daada4));
    func_0x01438628(*(undefined4 *)(_UNK_01dab3ec + 0x1daadb0));
    func_0x01438628(*(undefined4 *)(_UNK_01dab3f0 + 0x1daadbc));
    func_0x01438628(*(undefined4 *)(_UNK_01dab3f4 + 0x1daadc8));
    func_0x01438628(*(undefined4 *)(_UNK_01dab3f8 + 0x1daadd4));
    func_0x01438628(*(undefined4 *)(_UNK_01dab3fc + 0x1daade0));
    func_0x01438628(*(undefined4 *)(_UNK_01dab400 + 0x1daadec));
    func_0x01438628(*(undefined4 *)(_UNK_01dab404 + 0x1daadf8));
    func_0x01438628(*(undefined4 *)(_UNK_01dab408 + 0x1daae04));
    func_0x01438628(*(undefined4 *)(_UNK_01dab40c + 0x1daae10));
    func_0x01438628(*(undefined4 *)(_UNK_01dab410 + 0x1daae1c));
    func_0x01438628(*(undefined4 *)(_UNK_01dab414 + 0x1daae28));
    func_0x01438628(*(undefined4 *)(_UNK_01dab418 + 0x1daae34));
    func_0x01438628(*(undefined4 *)(_UNK_01dab41c + 0x1daae40));
    func_0x01438628(*(undefined4 *)(_UNK_01dab420 + 0x1daae4c));
    func_0x01438628(*(undefined4 *)(_UNK_01dab424 + 0x1daae58));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x130e,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_01dab428 + 0x1daaeb4);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar10 = *(undefined4 **)(_UNK_01dab42c + 0x1daaed0);
    iVar1 = func_0x014e9518(*puVar10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(char *)(iVar1 + 0x10) == '\0') {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x38) != 0 || *(int *)(iVar1 + 0x3c) != 0) {
        return 0;
      }
    }
    piVar8 = *(int **)(_UNK_01dab430 + 0x1daaefc);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x01dab950();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) < 1) {
      uVar3 = 0;
      iVar1 = FUN_01da858c(param_1,0);
      if (iVar1 == 0) {
        if (*(int *)(**(int **)(_UNK_01dab448 + 0x1dab138) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01dab44c + 0x1dab154));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01dab450 + 0x1dab174));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x1ac);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar9 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01dab454 + 0x1dab1a8));
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01dab458 + 0x1dab1c0));
        func_0x024f108c(iVar1,uVar9,**(undefined4 **)(_UNK_01dab45c + 0x1dab1d8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(int *)(iVar1 + 0xc) - 1;
        if (-1 < (int)uVar6) {
          uVar3 = 0;
          puVar10 = *(undefined4 **)(_UNK_01dab460 + 0x1dab208);
          puVar13 = *(undefined4 **)(_UNK_01dab464 + 0x1dab210);
          do {
            if (*(int *)(**(int **)(_UNK_01dab468 + 0x1dab218) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01dab46c + 0x1dab234));
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x036c7bec(iVar7,**(undefined4 **)(_UNK_01dab470 + 0x1dab254));
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = *(int *)(iVar7 + 0x1ac);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar9 = func_0x0152983c(iVar1,uVar6,*puVar10);
            if (iVar7 == 0) {
              func_0x014388e4();
            }
            iVar7 = func_0x03b73d40(iVar7,uVar9,*puVar13);
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x01dab484(iVar7);
            if (iVar2 != 0) {
              if (iVar7 == 0) {
                func_0x014388e4();
              }
              if ((*(char *)(iVar7 + 8) != '\0') && (*(char *)(iVar7 + 0x40) == '\0')) {
                func_0x026cdb90(iVar7,1,0);
                if (*(int *)(**(int **)(_UNK_01dab474 + 0x1dab314) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar7 = func_0x014e9518(**(undefined4 **)(_UNK_01dab478 + 0x1dab330));
                piVar12 = *(int **)(_UNK_01dab47c + 0x1dab344);
                iVar2 = *piVar12;
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x014387a4();
                  iVar2 = *piVar12;
                }
                uVar9 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x608);
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                uVar9 = func_0x02b0c90c(iVar7,uVar9,0,0);
                if (*(int *)(**(int **)(_UNK_01dab480 + 0x1dab390) + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar7 = func_0x024eec50(uVar9,0,0);
                uVar3 = 1;
                if (iVar7 != 0) {
                  return 0;
                }
              }
            }
            uVar6 = uVar6 - 1;
          } while (uVar6 < 0x80000000);
        }
      }
    }
    else {
      piVar8 = *(int **)(_UNK_01dab434 + 0x1daaf38);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar10 = *(undefined4 **)(_UNK_01dab438 + 0x1daaf54);
      iVar7 = func_0x014e9518(*puVar10);
      piVar12 = *(int **)(_UNK_01dab43c + 0x1daaf68);
      iVar2 = *piVar12;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar12;
      }
      uVar9 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x608);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x02b0fd48(iVar7,uVar9,0);
      piVar11 = *(int **)(_UNK_01dab440 + 0x1daafb0);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x024ef144(uVar9,0,0);
      uVar3 = 1;
      if (iVar7 == 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x014e9518(*puVar10);
        iVar2 = *piVar12;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
          iVar2 = *piVar12;
        }
        uVar9 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x608);
        piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01dab444 + 0x1dab024),1);
        if (piVar8 == (int *)0x0) {
          func_0x014388e4();
        }
        iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar8 + 0x20));
        if (iVar2 == 0) {
          uVar4 = func_0x01438904();
          func_0x01438790(uVar4,0);
        }
        if (piVar8[3] == 0) {
          func_0x014388e8();
        }
        piVar8[4] = iVar1;
        func_0x014385cc(piVar8 + 4,iVar1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar9 = func_0x02b0c90c(iVar7,uVar9,piVar8,0);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar3 = func_0x024eec50(uVar9,0,0);
        uVar3 = uVar3 ^ 1;
      }
    }
    return uVar3;
  }
  iVar1 = func_0x029540a4(0x130e,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar7,uVar9,&uStack_30,uVar4,0,0);
  uVar3 = func_0x024f56e0(&uStack_30,0,0);
  return uVar3;
}

