
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c480c4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint extraout_r12;
  bool bVar12;
  
  pcVar8 = (char *)(iRam02c48698 + 0x2c480dc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4869c + 0x2c480f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c486a0 + 0x2c480fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c486a4 + 0x2c48108));
    func_0x01438628(*(undefined4 *)(_UNK_02c486a8 + 0x2c48114));
    func_0x01438628(*(undefined4 *)(_UNK_02c486ac + 0x2c48120));
    func_0x01438628(*(undefined4 *)(_UNK_02c486b0 + 0x2c4812c));
    func_0x01438628(*(undefined4 *)(_UNK_02c486b4 + 0x2c48138));
    func_0x01438628(*(undefined4 *)(_UNK_02c486b8 + 0x2c48144));
    func_0x01438628(*(undefined4 *)(_UNK_02c486bc + 0x2c48150));
    *pcVar8 = '\x01';
  }
  iVar10 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    piVar1 = *(int **)(_UNK_02c486c0 + 0x2c48184);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c486c4 + 0x2c481a4));
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar3 = FUN_02c1969c(iVar10,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02c486f0(iVar2,uVar3);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    func_0x014385cc();
    if (*(int *)(**(int **)(_UNK_02c486c8 + 0x2c481fc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c486cc + 0x2c48218));
    if (iVar10 == 0) {
      func_0x014388e4();
      uVar3 = FUN_02c19900(0,0);
      func_0x014388e4();
    }
    else {
      uVar3 = FUN_02c19900(iVar10,0);
    }
    uVar4 = FUN_02c0c0ac(iVar10,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02bdd790(iVar2,uVar3,uVar4,0,0);
    *(int *)(param_1 + 0x18) = iVar2;
    if (iVar2 == -1 || *(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      func_0x014385cc((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
  }
  if (*(int *)(**(int **)(_UNK_02c486d0 + 0x2c482d8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c486d4 + 0x2c482f4));
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  uVar3 = FUN_02c1969c(iVar10,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x029a6fa8(iVar2,uVar3,0);
  if (*(int *)(**(int **)(_UNK_02c486d8 + 0x2c48344) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar11 = *(undefined4 **)(_UNK_02c486dc + 0x2c48360);
  iVar5 = func_0x014e9518(*puVar11);
  if (iVar10 == 0) {
    func_0x014388e4();
    uVar3 = FUN_02c19900(0,0);
    func_0x014388e4();
  }
  else {
    uVar3 = FUN_02c19900(iVar10,0);
  }
  uVar4 = FUN_02c0c0ac(iVar10,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  FUN_02bda8ac(iVar5,uVar3,uVar4,**(undefined4 **)(_UNK_02c486e0 + 0x2c483d4),1,0);
  iVar5 = func_0x014e9518(*puVar11);
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  uVar3 = FUN_02c19900(iVar10,0);
  iVar9 = *(int *)(param_1 + 0x14);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(undefined4 *)(iVar9 + 8);
  if (iVar10 == 0) {
    func_0x014388e4();
    uVar6 = FUN_02c0c0ac(0,0);
    func_0x014388e4();
  }
  else {
    uVar6 = FUN_02c0c0ac(iVar10,0);
  }
  uVar7 = FUN_02c19900(iVar10,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  FUN_02bd2cf0(iVar5,uVar3,uVar4,1,2,uVar6,uVar7,1,0xffffffff,0,0);
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02c486e4 + 0x2c484b8));
  iVar9 = *(int *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(undefined4 *)(iVar9 + 8);
  if (iVar10 == 0) {
    func_0x014388e4();
    uVar6 = FUN_02c0c0ac(0,0);
    func_0x014388e4();
  }
  else {
    uVar6 = FUN_02c0c0ac(iVar10,0);
  }
  uVar7 = FUN_02c19900(iVar10,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  FUN_02bd2cf0(iVar5,uVar3,uVar4,1,2,uVar6,uVar7,1,0xffffffff,0,0);
  if (*(int *)(**(int **)(_UNK_02c486e8 + 0x2c48570) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar10 = func_0x0202346c(0);
  iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c486ec + 0x2c48598));
  func_0x02025440(iVar5,0);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar5 + 8) = 1;
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x2c);
  iVar9 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(iVar5 + 0x10) = uVar3;
  if (iVar9 == 0) {
    func_0x014388e4();
    iVar9 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar5 + 0x14) = uRam00000030;
    if (iVar9 != 0) goto LAB_02c48610;
    func_0x014388e4();
    iVar9 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar5 + 0x18) = uRam0000002c;
    if (iVar9 == 0) {
      func_0x014388e4();
      iVar9 = *(int *)(param_1 + 0x14);
      bVar12 = iVar9 == 0;
      *(undefined4 *)(iVar5 + 0x1c) = uRam00000030;
      if (bVar12) {
        func_0x014388e4();
                    /* WARNING: Could not recover jumptable at 0x02c48698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        if (!bVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar3 = (*(code *)(extraout_r12 & 0xfffffffe | 0x9d0))();
        return uVar3;
      }
      goto LAB_02c48620;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar9 + 0x30);
LAB_02c48610:
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar9 + 0x2c);
  }
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar9 + 0x30);
LAB_02c48620:
  uVar3 = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined2 *)(iVar5 + 0x24) = 0;
  *(undefined4 *)(iVar5 + 0x20) = uVar3;
  if (iVar10 == 0) {
    func_0x014388e4();
  }
  func_0x02024d08(iVar10,iVar5,1,0);
  return 0;
}

