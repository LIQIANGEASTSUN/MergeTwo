
/* WARNING: Possible PIC construction at 0x02c194c4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0c184(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x02953fd4(0x4fc8,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined4 *)(param_1 + 0x10) = param_2;
    func_0x02c0c38c(param_1,param_2);
    func_0x02c0c8f8(param_1,param_2);
    func_0x02c0ceac(param_1,param_2);
    func_0x02c0d7d0(param_1,param_2);
    func_0x02c0dd88(param_1,param_2);
    func_0x02c0e6ac(param_1,param_2);
    func_0x02c0ec64(param_1,param_2);
    func_0x02c0f588(param_1,param_2);
    func_0x02c0fb40(param_1,param_2);
    func_0x02c100f8(param_1,param_2);
    func_0x02c106b0(param_1,param_2);
    func_0x02c10c68(param_1,param_2);
    func_0x02c11220(param_1,param_2);
    func_0x02c117d8(param_1,param_2);
    func_0x02c11d90(param_1,param_2);
    func_0x02c12348(param_1,param_2);
    func_0x02c12900(param_1,param_2);
    func_0x02c12eb8(param_1,param_2);
    func_0x02c13470(param_1,param_2);
    func_0x02c13a28(param_1,param_2);
    func_0x02c13fe0(param_1,param_2);
    func_0x02c14598(param_1,param_2);
    func_0x02c14b50(param_1,param_2);
    func_0x02c15108(param_1,param_2);
    func_0x02c156c0(param_1,param_2);
    func_0x02c15c78(param_1,param_2);
    func_0x02c16230(param_1,param_2);
    func_0x02c167e8(param_1,param_2);
    func_0x02c16da0(param_1,param_2);
    func_0x02c17358(param_1,param_2);
    func_0x02c17910(param_1,param_2);
    func_0x02c17ec8(param_1,param_2);
    func_0x02c18480(param_1,param_2);
    func_0x02c18a38(param_1,param_2);
    pcVar7 = (char *)(_UNK_02c1950c + 0x2c19000);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c19510 + 0x2c19014));
      func_0x01438628(*(undefined4 *)(_UNK_02c19514 + 0x2c19020));
      func_0x01438628(*(undefined4 *)(_UNK_02c19518 + 0x2c1902c));
      func_0x01438628(*(undefined4 *)(_UNK_02c1951c + 0x2c19038));
      func_0x01438628(*(undefined4 *)(_UNK_02c19520 + 0x2c19044));
      func_0x01438628(*(undefined4 *)(_UNK_02c19524 + 0x2c19050));
      func_0x01438628(*(undefined4 *)(_UNK_02c19528 + 0x2c1905c));
      func_0x01438628(*(undefined4 *)(_UNK_02c1952c + 0x2c19068));
      func_0x01438628(*(undefined4 *)(_UNK_02c19530 + 0x2c19074));
      func_0x01438628(*(undefined4 *)(_UNK_02c19534 + 0x2c19080));
      func_0x01438628(*(undefined4 *)(_UNK_02c19538 + 0x2c1908c));
      func_0x01438628(*(undefined4 *)(_UNK_02c1953c + 0x2c19098));
      func_0x01438628(*(undefined4 *)(_UNK_02c19540 + 0x2c190a4));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x4feb,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x1a4),param_2,
                              **(undefined4 **)(_UNK_02c19544 + 0x2c19108));
      *(char *)(param_1 + 0x1a0) = (char)iVar1;
      if (iVar1 == 0) {
        return;
      }
      iVar1 = func_0x024eecb8(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar10 = *(undefined4 **)(_UNK_02c19548 + 0x2c1914c);
      iVar1 = func_0x024f0e6c(iVar1,*puVar10,0);
      piVar8 = *(int **)(_UNK_02c1954c + 0x2c19160);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x024eec50(iVar1,0,0);
      if (iVar5 != 0) {
        if (*(int *)(**(int **)(_UNK_02c19550 + 0x2c19194) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c19554 + 0x2c191b0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_2c = **(undefined4 **)(_UNK_02c1955c + 0x2c191e4);
        uStack_30 = 0;
        uVar6 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_02c19558 + 0x2c191d8),0,1);
        uVar4 = func_0x024eecb8(param_1,0);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x03680314(uVar6,uVar4,**(undefined4 **)(_UNK_02c19560 + 0x2c19230));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024ef308(iVar1,0);
        pcVar7 = (char *)(_UNK_02c19564 + 0x2c19264);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02c19568 + 0x2c19278));
          *pcVar7 = '\x01';
        }
        piVar8 = *(int **)(_UNK_02c1956c + 0x2c19290);
        puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
        uVar4 = *puVar2;
        uVar6 = puVar2[1];
        uVar9 = puVar2[2];
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uStack_30 = 0;
        func_0x024ef1f8(iVar5,uVar4,uVar6,uVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024ef308(iVar1,0);
        pcVar7 = (char *)(_UNK_02c19570 + 0x2c192e8);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_02c19574 + 0x2c192fc));
          *pcVar7 = '\x01';
        }
        iVar3 = *(int *)(*piVar8 + 0x5c);
        uVar6 = *(undefined4 *)(iVar3 + 0xc);
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar9 = *(undefined4 *)(iVar3 + 0x14);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uStack_30 = 0;
        func_0x024ef328(iVar5,uVar6,uVar4,uVar9);
        if (iVar1 == 0) {
          func_0x014388e4();
          func_0x024ef2f8(0,*puVar10,0);
          func_0x014388e4();
        }
        else {
          func_0x024ef2f8(iVar1,*puVar10,0);
        }
        iVar1 = func_0x024ef308(iVar1,0);
      }
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c19578 + 0x2c1939c),0);
      *(undefined4 *)(param_1 + 0x198) = uVar6;
      func_0x014385cc();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = 0;
      iVar5 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c1957c + 0x2c193d4),0);
      piVar8 = (int *)(param_1 + 0x19c);
      *piVar8 = iVar5;
      func_0x014385cc(piVar8,iVar5);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c19580 + 0x2c1940c),0);
      if (iVar5 != 0) {
        uVar6 = func_0x035e8140(iVar5,**(undefined4 **)(_UNK_02c19584 + 0x2c19428));
      }
      *(undefined4 *)(param_1 + 400) = uVar6;
      func_0x014385cc((undefined4 *)(param_1 + 400),uVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = 0;
      iVar1 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c19588 + 0x2c19460),0);
      if (iVar1 != 0) {
        uVar6 = func_0x035e8140(iVar1,**(undefined4 **)(_UNK_02c1958c + 0x2c1947c));
      }
      *(undefined4 *)(param_1 + 0x194) = uVar6;
      func_0x014385cc((undefined4 *)(param_1 + 0x194),uVar6);
      if (*(int *)(param_1 + 0x198) == 0) {
        if (*piVar8 == 0) {
          return;
        }
        iVar1 = func_0x014e94d8(*piVar8,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
      }
      else {
        iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x198),0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
      }
      (*(code *)&UNK_05d3ec04)(iVar1,0,0);
      return;
    }
    iVar1 = func_0x029540a4(0x4feb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = func_0x029540a4(0x4fc8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
  return;
}

