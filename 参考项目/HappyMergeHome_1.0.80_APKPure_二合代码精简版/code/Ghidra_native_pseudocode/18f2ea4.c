
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01902ea4(undefined4 *param_1,uint param_2)

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
  
  pcVar10 = (char *)(_UNK_019032f4 + 0x1902ec0);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019032f8 + 0x1902ed4));
    func_0x01438628(*(undefined4 *)(_UNK_019032fc + 0x1902ee0));
    func_0x01438628(*(undefined4 *)(_UNK_01903300 + 0x1902eec));
    func_0x01438628(*(undefined4 *)(_UNK_01903304 + 0x1902ef8));
    func_0x01438628(*(undefined4 *)(_UNK_01903308 + 0x1902f04));
    func_0x01438628(*(undefined4 *)(_UNK_0190330c + 0x1902f10));
    func_0x01438628(*(undefined4 *)(_UNK_01903310 + 0x1902f1c));
    func_0x01438628(*(undefined4 *)(_UNK_01903314 + 0x1902f28));
    func_0x01438628(*(undefined4 *)(_UNK_01903318 + 0x1902f34));
    func_0x01438628(*(undefined4 *)(_UNK_0190331c + 0x1902f40));
    func_0x01438628(*(undefined4 *)(_UNK_01903320 + 0x1902f4c));
    func_0x01438628(*(undefined4 *)(_UNK_01903324 + 0x1902f58));
    func_0x01438628(*(undefined4 *)(_UNK_01903328 + 0x1902f64));
    *pcVar10 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x02953fd4(0x969a,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_0190332c + 0x1902fd8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01903330 + 0x1902ff4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x24);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0152da0c(&uStack_48,iVar2,**(undefined4 **)(_UNK_01903334 + 0x190302c));
    iVar2 = 0;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar14 = *(undefined4 **)(_UNK_01903338 + 0x1903054);
    puVar13 = *(undefined4 **)(_UNK_0190333c + 0x190305c);
    iStack_50 = 0;
    while (iVar3 = func_0x015109ec(&uStack_38,**(undefined4 **)(_UNK_0190334c + 0x1903068)),
          iVar4 = iStack_2c, iVar3 != 0) {
      if (*(int *)(**(int **)(_UNK_01903340 + 0x1903084) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01903344 + 0x19030a4));
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
            if (*(int *)(**(int **)(_UNK_01903348 + 0x1903104) + 0x74) == 0) {
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
    func_0x0152da2c(&uStack_38,**(undefined4 **)(_UNK_01903350 + 0x19031fc));
    uVar11 = **(undefined4 **)(_UNK_01903358 + 0x1903214);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar2,iStack_50,uVar11);
  }
  else {
    iVar2 = func_0x029540a4(0x969a,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0291ffb4(&uStack_48,iVar2,param_2,0);
    *param_1 = uStack_48;
    param_1[1] = uStack_44;
  }
  return;
}

