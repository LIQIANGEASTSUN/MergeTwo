
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029fe10c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_029fe790 + 0x29fe12c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029fe794 + 0x29fe144));
    func_0x01438628(*(undefined4 *)(_UNK_029fe798 + 0x29fe150));
    func_0x01438628(*(undefined4 *)(_UNK_029fe79c + 0x29fe15c));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7a0 + 0x29fe168));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7a4 + 0x29fe174));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7a8 + 0x29fe180));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7ac + 0x29fe18c));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7b0 + 0x29fe198));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7b4 + 0x29fe1a4));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7b8 + 0x29fe1b0));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7bc + 0x29fe1bc));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7c0 + 0x29fe1c8));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7c4 + 0x29fe1d4));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7c8 + 0x29fe1e0));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7cc + 0x29fe1ec));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7d0 + 0x29fe1f8));
    func_0x01438628(*(undefined4 *)(_UNK_029fe7d4 + 0x29fe204));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x263c,0);
  if (iVar1 == 0) {
    iVar1 = FUN_029fc754(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_029fcfe8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar1 + 0x2c);
      iVar1 = FUN_029fdd8c(param_1);
      if (iVar6 != iVar1) {
        iVar1 = FUN_029fcfe8(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_0269e8b8(iVar1,0,0);
        iVar1 = FUN_029fcfe8(param_1);
        uVar2 = FUN_029fdd8c(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_0269e974(iVar1,uVar2,0);
      }
      iVar1 = FUN_029fcfe8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_28 = FUN_029fdfd0(param_1,*(undefined4 *)(iVar1 + 0x28));
      iVar1 = FUN_029fcfe8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_2c = *(undefined4 *)(iVar1 + 0x28);
      uVar2 = func_0x01524ffc(&uStack_2c,0);
      uVar3 = func_0x0152542c(&uStack_28,0);
      uVar2 = func_0x024eee88(**(undefined4 **)(_UNK_029fe7d8 + 0x29fe37c),uVar2,
                              **(undefined4 **)(_UNK_029fe7dc + 0x29fe388),uVar3,0);
      iVar6 = **(int **)(_UNK_029fe7e0 + 0x29fe3a4);
      iVar1 = *(int *)(iVar6 + 0x1c);
      if (iVar1 == 0) {
        func_0x014909d8(iVar6);
        iVar1 = *(int *)(iVar6 + 0x1c);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      uVar3 = **(undefined4 **)(iVar1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_029fe7e4 + 0x29fe404) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_029fe7e4 + 0x29fe404));
      }
      iVar9 = 0;
      func_0x026794a8(uVar2,uVar3,0);
      iVar1 = FUN_029fd48c(param_1);
      iVar6 = FUN_029fd48c(param_1);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x024f14b8(0,*(undefined4 *)(iVar6 + 0x1c),0);
      iVar8 = 0;
      puVar10 = *(undefined4 **)(_UNK_029fe7e8 + 0x29fe47c);
      while( true ) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar1 + 0x18);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar9) {
          return;
        }
        iVar7 = *(int *)(iVar1 + 0x18);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x024f0530(iVar7,iVar9,*puVar10);
        iVar8 = iVar7 + iVar8;
        if (iVar6 < iVar8) break;
        iVar9 = iVar9 + 1;
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0530(iVar1,iVar9,*puVar10);
      if (-1 < iVar1) {
        piVar11 = *(int **)(_UNK_029fe7ec + 0x29fe50c);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar10 = *(undefined4 **)(_UNK_029fe7f0 + 0x29fe528);
        iVar6 = func_0x014e9518(*puVar10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_029a6fa8(iVar6,iVar1,0);
        if (0 < param_5) {
          do {
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar1 + 0x4c);
            if (0 < iVar6) {
              if (*(int *)(*piVar11 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(*puVar10);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = FUN_029a6fa8(iVar1,iVar6,0);
            }
            param_5 = param_5 + -1;
          } while (param_5 != 0);
        }
        if (*(int *)(**(int **)(_UNK_029fe7f4 + 0x29fe5c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x0202346c(0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar6,0x1df,0,0,0,0,0);
        iVar6 = FUN_029fdc50(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar1 + 8);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar6,uVar2,**(undefined4 **)(_UNK_029fe7f8 + 0x29fe660));
        if (*(int *)(**(int **)(_UNK_029fe7fc + 0x29fe674) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_029fe800 + 0x29fe690));
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_029fe808 + 0x29fe6c0),
                                **(undefined4 **)(_UNK_029fe804 + 0x29fe6b4));
        uVar2 = *(undefined4 *)(iVar1 + 8);
        if (param_4 == 0) {
          func_0x014388e4();
        }
        func_0x02bebb14(&uStack_38,param_4,param_2,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x024eecb8(iVar6,0);
        uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_029fe80c + 0x29fe720));
        func_0x0152e3ec(uVar4,param_1,**(undefined4 **)(_UNK_029fe810 + 0x29fe73c),0);
        if (*(int *)(**(int **)(_UNK_029fe814 + 0x29fe750) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x029fe818(uVar2,uStack_38,uStack_34,uVar3,0x3f4ccccd,1,uVar4);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x263c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

