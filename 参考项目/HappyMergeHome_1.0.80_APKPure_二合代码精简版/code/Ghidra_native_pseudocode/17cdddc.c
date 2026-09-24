
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017ddddc(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 extraout_r2;
  undefined1 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar10 = (char *)(_UNK_017de22c + 0x17dddf8);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017de230 + 0x17dde0c));
    func_0x01438628(*(undefined4 *)(_UNK_017de234 + 0x17dde18));
    func_0x01438628(*(undefined4 *)(_UNK_017de238 + 0x17dde24));
    func_0x01438628(*(undefined4 *)(_UNK_017de23c + 0x17dde30));
    func_0x01438628(*(undefined4 *)(_UNK_017de240 + 0x17dde3c));
    func_0x01438628(*(undefined4 *)(_UNK_017de244 + 0x17dde48));
    func_0x01438628(*(undefined4 *)(_UNK_017de248 + 0x17dde54));
    func_0x01438628(*(undefined4 *)(_UNK_017de24c + 0x17dde60));
    func_0x01438628(*(undefined4 *)(_UNK_017de250 + 0x17dde6c));
    func_0x01438628(*(undefined4 *)(_UNK_017de254 + 0x17dde78));
    func_0x01438628(*(undefined4 *)(_UNK_017de258 + 0x17dde84));
    func_0x01438628(*(undefined4 *)(_UNK_017de25c + 0x17dde90));
    func_0x01438628(*(undefined4 *)(_UNK_017de260 + 0x17dde9c));
    *pcVar10 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x02953fd4(0x8fbc,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_017de264 + 0x17ddf10) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017de268 + 0x17ddf2c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x24);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0152da0c(&uStack_48,iVar2,**(undefined4 **)(_UNK_017de26c + 0x17ddf64));
    iVar2 = 0;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar14 = *(undefined4 **)(_UNK_017de270 + 0x17ddf8c);
    puVar13 = *(undefined4 **)(_UNK_017de274 + 0x17ddf94);
    iStack_50 = 0;
    while (iVar3 = func_0x015109ec(&uStack_38,**(undefined4 **)(_UNK_017de284 + 0x17ddfa0)),
          iVar4 = iStack_2c, iVar3 != 0) {
      if (*(int *)(**(int **)(_UNK_017de278 + 0x17ddfbc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017de27c + 0x17ddfdc));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar11 = *(undefined4 *)(iVar4 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x029b1058(iVar3,uVar11,0);
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 0xc);
        if (0 < iVar3) {
          iVar12 = 0;
          do {
            if (*(int *)(**(int **)(_UNK_017de280 + 0x17de03c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(*puVar14);
            iVar5 = func_0x0152983c(iVar4,iVar12,*puVar13);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar11 = *(undefined4 *)(iVar5 + 8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x02be153c(iVar3,uVar11,0);
            iVar3 = func_0x014e9518(*puVar14);
            iVar5 = func_0x0152983c(iVar4,iVar12,*puVar13);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar11 = *(undefined4 *)(iVar5 + 8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x02be1348(iVar3,uVar11,0);
            iVar12 = iVar12 + 1;
            uVar8 = uVar7 | uVar6 ^ 1;
            uVar9 = extraout_r2;
            uVar1 = uVar8;
            if (uVar8 == 0) {
              uVar9 = 1;
              uVar1 = param_2;
            }
            iVar2 = iVar2 + (uVar6 & uVar7);
            if (uVar8 == 0) {
              *(undefined1 *)(uVar1 + 0x4b) = uVar9;
            }
            iVar3 = *(int *)(iVar4 + 0xc);
          } while (iVar12 < iVar3);
        }
        iStack_50 = iVar3 + iStack_50;
      }
    }
    func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_017de288 + 0x17de134));
    uVar11 = **(undefined4 **)(_UNK_017de290 + 0x17de14c);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar2,iStack_50,uVar11);
  }
  else {
    iVar2 = func_0x029540a4(0x8fbc,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0291ffb4(&uStack_48,iVar2,param_2,0);
    *param_1 = uStack_48;
    param_1[1] = uStack_44;
  }
  return;
}

