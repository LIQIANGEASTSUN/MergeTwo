
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0331b0a8(int param_1)

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
  int aiStack_28 [3];
  
  iVar9 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  pcVar8 = (char *)(_UNK_03316c2c + 0x3316494);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03316c30 + 0x33164a8));
    func_0x01438628(*(undefined4 *)(_UNK_03316c34 + 0x33164b4));
    func_0x01438628(*(undefined4 *)(_UNK_03316c38 + 0x33164c0));
    func_0x01438628(*(undefined4 *)(_UNK_03316c3c + 0x33164cc));
    func_0x01438628(*(undefined4 *)(_UNK_03316c40 + 0x33164d8));
    func_0x01438628(*(undefined4 *)(_UNK_03316c44 + 0x33164e4));
    func_0x01438628(*(undefined4 *)(_UNK_03316c48 + 0x33164f0));
    func_0x01438628(*(undefined4 *)(_UNK_03316c4c + 0x33164fc));
    func_0x01438628(*(undefined4 *)(_UNK_03316c50 + 0x3316508));
    func_0x01438628(*(undefined4 *)(_UNK_03316c54 + 0x3316514));
    func_0x01438628(*(undefined4 *)(_UNK_03316c58 + 0x3316520));
    func_0x01438628(*(undefined4 *)(_UNK_03316c5c + 0x331652c));
    func_0x01438628(*(undefined4 *)(_UNK_03316c60 + 0x3316538));
    func_0x01438628(*(undefined4 *)(_UNK_03316c64 + 0x3316544));
    func_0x01438628(*(undefined4 *)(_UNK_03316c68 + 0x3316550));
    func_0x01438628(*(undefined4 *)(_UNK_03316c6c + 0x331655c));
    func_0x01438628(*(undefined4 *)(_UNK_03316c70 + 0x3316568));
    func_0x01438628(*(undefined4 *)(_UNK_03316c74 + 0x3316574));
    func_0x01438628(*(undefined4 *)(_UNK_03316c78 + 0x3316580));
    func_0x01438628(*(undefined4 *)(_UNK_03316c7c + 0x331658c));
    func_0x01438628(*(undefined4 *)(_UNK_03316c80 + 0x3316598));
    func_0x01438628(*(undefined4 *)(_UNK_03316c84 + 0x33165a4));
    func_0x01438628(*(undefined4 *)(_UNK_03316c88 + 0x33165b0));
    func_0x01438628(*(undefined4 *)(_UNK_03316c8c + 0x33165bc));
    func_0x01438628(*(undefined4 *)(_UNK_03316c90 + 0x33165c8));
    func_0x01438628(*(undefined4 *)(_UNK_03316c94 + 0x33165d4));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x84f3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03316c98 + 0x3316638));
    func_0x051b0d14(iVar1,0);
    iVar3 = FUN_0330edb4(iVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar10 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_03316c9c + 0x3316690));
    if (iVar3 == 0) {
      iVar3 = FUN_0330edb4(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_03316ca0 + 0x33166e0));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_03316ca4 + 0x33166f4));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_03316ca8 + 0x3316708));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_0330fb18(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_03316cac + 0x3316764));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_03316cb0 + 0x3316798);
        while( true ) {
          iVar10 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = aiStack_28[0];
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          iVar3 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03316cb4 + 0x3316838));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_03316cb8 + 0x3316888);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar3 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x04cfda38(iVar10,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar9 = iVar9 + 1;
        }
      }
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_03316cbc + 0x33168e8));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_03316cc0 + 0x33168fc));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_03316cc4 + 0x3316940) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_0330dad0();
        if (iVar9 != 0) {
          FUN_03316d04();
        }
        if (*(int *)(**(int **)(_UNK_03316cc8 + 0x3316968) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_03316ccc + 0x3316988));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_03316cd0 + 0x33169c0);
        piVar13 = *(int **)(_UNK_03316cd4 + 0x33169c8);
        while( true ) {
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x04cfd760(iVar10,iVar9,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          if (iVar10 == 0) {
            func_0x014388e4();
            uVar2 = func_0x0515c4b0(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x0515c4b0(iVar10 + 8,0);
          }
          uVar4 = func_0x0515c4b0(iVar10 + 0xc,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar3,0x220,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_03316cd8 + 0x3316b24) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_03316cdc + 0x3316b40));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_03316ce0 + 0x3316b54) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03316ce4 + 0x3316b74));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03316ce8 + 0x3316b94));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_03316cec + 0x3316bb4),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0x69,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_03316cf0 + 0x3316abc);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_03316cf4 + 0x3316ad8);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03316cf8 + 0x3316aec));
      *pcVar8 = '\x01';
    }
    iVar9 = *piVar14;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x014387a4();
      iVar9 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x84f3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

