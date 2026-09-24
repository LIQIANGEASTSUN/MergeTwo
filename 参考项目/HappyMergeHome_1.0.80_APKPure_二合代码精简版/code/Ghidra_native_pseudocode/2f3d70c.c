
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f4d70c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02f4dec8 + 0x2f4d728);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4decc + 0x2f4d73c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4ded0 + 0x2f4d748));
    func_0x01438628(*(undefined4 *)(_UNK_02f4ded4 + 0x2f4d754));
    func_0x01438628(*(undefined4 *)(_UNK_02f4ded8 + 0x2f4d760));
    func_0x01438628(*(undefined4 *)(_UNK_02f4dedc + 0x2f4d76c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4dee0 + 0x2f4d778));
    func_0x01438628(*(undefined4 *)(_UNK_02f4dee4 + 0x2f4d784));
    func_0x01438628(*(undefined4 *)(_UNK_02f4dee8 + 0x2f4d790));
    func_0x01438628(*(undefined4 *)(_UNK_02f4deec + 0x2f4d79c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4def0 + 0x2f4d7a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4def4 + 0x2f4d7b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4def8 + 0x2f4d7c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4defc + 0x2f4d7cc));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df00 + 0x2f4d7d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df04 + 0x2f4d7e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df08 + 0x2f4d7f0));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df0c + 0x2f4d7fc));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df10 + 0x2f4d808));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df14 + 0x2f4d814));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df18 + 0x2f4d820));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df1c + 0x2f4d82c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df20 + 0x2f4d838));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df24 + 0x2f4d844));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df28 + 0x2f4d850));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df2c + 0x2f4d85c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4df30 + 0x2f4d868));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6dc1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f4df34 + 0x2f4d8cc));
    func_0x02f56590(iVar1,0);
    iVar3 = FUN_02f44c50(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_02f4df38 + 0x2f4d924));
    if (iVar3 == 0) {
      iVar3 = FUN_02f44c50(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_02f4df3c + 0x2f4d974));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f4df40 + 0x2f4d988));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_02f4df44 + 0x2f4d99c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_02f45dd4(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_02f4df48 + 0x2f4d9f8));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_02f4df4c + 0x2f4da2c);
        while( true ) {
          iVar9 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar9 + 0x10);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = iStack_28;
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x04cd26d0(iVar10,iVar3,*puVar12);
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x04cd26d0(iVar10,iVar3,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f4df50 + 0x2f4dacc));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_02f4df54 + 0x2f4db1c);
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar9 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar10 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x04cfda38(iVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f4df58 + 0x2f4db7c));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_02f4df5c + 0x2f4db90));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_02f4df60 + 0x2f4dbd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_02f428bc();
        if (iVar3 != 0) {
          func_0x02f578ac(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_02f4df64 + 0x2f4dc04) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4df68 + 0x2f4dc24));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_02f4df6c + 0x2f4dc5c);
        piVar13 = *(int **)(_UNK_02f4df70 + 0x2f4dc64);
        while( true ) {
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x04cfd760(iVar9,iVar3,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = func_0x0202346c(0);
          if (iVar9 == 0) {
            func_0x014388e4();
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar9 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar9 + 0xc,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar10,0x2f4,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_02f4df74 + 0x2f4ddc0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02f4df78 + 0x2f4dddc));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_02f4df7c + 0x2f4ddf0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4df80 + 0x2f4de10));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02f4df84 + 0x2f4de30));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_02f4df88 + 0x2f4de50),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0xee,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_02f4df8c + 0x2f4dd58);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_02f4df90 + 0x2f4dd74);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02f4df94 + 0x2f4dd88));
      *pcVar8 = '\x01';
    }
    iVar1 = *piVar14;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x6dc1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

