
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032dd5e0(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_032ddd9c + 0x32dd5fc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032ddda0 + 0x32dd610));
    func_0x01438628(*(undefined4 *)(_UNK_032ddda4 + 0x32dd61c));
    func_0x01438628(*(undefined4 *)(_UNK_032ddda8 + 0x32dd628));
    func_0x01438628(*(undefined4 *)(_UNK_032dddac + 0x32dd634));
    func_0x01438628(*(undefined4 *)(_UNK_032dddb0 + 0x32dd640));
    func_0x01438628(*(undefined4 *)(_UNK_032dddb4 + 0x32dd64c));
    func_0x01438628(*(undefined4 *)(_UNK_032dddb8 + 0x32dd658));
    func_0x01438628(*(undefined4 *)(_UNK_032dddbc + 0x32dd664));
    func_0x01438628(*(undefined4 *)(_UNK_032dddc0 + 0x32dd670));
    func_0x01438628(*(undefined4 *)(_UNK_032dddc4 + 0x32dd67c));
    func_0x01438628(*(undefined4 *)(_UNK_032dddc8 + 0x32dd688));
    func_0x01438628(*(undefined4 *)(_UNK_032dddcc + 0x32dd694));
    func_0x01438628(*(undefined4 *)(_UNK_032dddd0 + 0x32dd6a0));
    func_0x01438628(*(undefined4 *)(_UNK_032dddd4 + 0x32dd6ac));
    func_0x01438628(*(undefined4 *)(_UNK_032dddd8 + 0x32dd6b8));
    func_0x01438628(*(undefined4 *)(_UNK_032ddddc + 0x32dd6c4));
    func_0x01438628(*(undefined4 *)(_UNK_032ddde0 + 0x32dd6d0));
    func_0x01438628(*(undefined4 *)(_UNK_032ddde4 + 0x32dd6dc));
    func_0x01438628(*(undefined4 *)(_UNK_032ddde8 + 0x32dd6e8));
    func_0x01438628(*(undefined4 *)(_UNK_032dddec + 0x32dd6f4));
    func_0x01438628(*(undefined4 *)(_UNK_032dddf0 + 0x32dd700));
    func_0x01438628(*(undefined4 *)(_UNK_032dddf4 + 0x32dd70c));
    func_0x01438628(*(undefined4 *)(_UNK_032dddf8 + 0x32dd718));
    func_0x01438628(*(undefined4 *)(_UNK_032dddfc + 0x32dd724));
    func_0x01438628(*(undefined4 *)(_UNK_032dde00 + 0x32dd730));
    func_0x01438628(*(undefined4 *)(_UNK_032dde04 + 0x32dd73c));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8369,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032dde08 + 0x32dd7a0));
    func_0x051b0d14(iVar1,0);
    iVar3 = FUN_032d4694(param_1);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_032dde0c + 0x32dd7f8));
    if (iVar3 == 0) {
      iVar3 = FUN_032d4694(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_032dde10 + 0x32dd848));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_032dde14 + 0x32dd85c));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_032dde18 + 0x32dd870));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_032d5818(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_032dde1c + 0x32dd8cc));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_032dde20 + 0x32dd900);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032dde24 + 0x32dd9a0));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_032dde28 + 0x32dd9f0);
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
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_032dde2c + 0x32dda50));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_032dde30 + 0x32dda64));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_032dde34 + 0x32ddaa8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_032d3310();
        if (iVar3 != 0) {
          func_0x033016f0(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_032dde38 + 0x32ddad8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032dde3c + 0x32ddaf8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_032dde40 + 0x32ddb30);
        piVar13 = *(int **)(_UNK_032dde44 + 0x32ddb38);
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
            uVar2 = func_0x0515c4b0(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x0515c4b0(iVar9 + 8,0);
          }
          uVar4 = func_0x0515c4b0(iVar9 + 0xc,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar10,0x2bf,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_032dde48 + 0x32ddc94) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_032dde4c + 0x32ddcb0));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_032dde50 + 0x32ddcc4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_032dde54 + 0x32ddce4));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032dde58 + 0x32ddd04));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_032dde5c + 0x32ddd24),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0xca,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_032dde60 + 0x32ddc2c);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_032dde64 + 0x32ddc48);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_032dde68 + 0x32ddc5c));
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
    iVar1 = func_0x029540a4(0x8369,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

