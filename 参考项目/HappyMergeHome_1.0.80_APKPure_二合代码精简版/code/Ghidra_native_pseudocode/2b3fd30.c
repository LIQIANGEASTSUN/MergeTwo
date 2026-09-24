
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4fd30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pcVar3 = (char *)(_UNK_02b50088 + 0x2b4fd48);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b5008c + 0x2b4fd5c));
    func_0x01438628(*(undefined4 *)(_UNK_02b50090 + 0x2b4fd68));
    func_0x01438628(*(undefined4 *)(_UNK_02b50094 + 0x2b4fd74));
    func_0x01438628(*(undefined4 *)(_UNK_02b50098 + 0x2b4fd80));
    func_0x01438628(*(undefined4 *)(_UNK_02b5009c + 0x2b4fd8c));
    func_0x01438628(*(undefined4 *)(_UNK_02b500a0 + 0x2b4fd98));
    func_0x01438628(*(undefined4 *)(_UNK_02b500a4 + 0x2b4fda4));
    func_0x01438628(*(undefined4 *)(_UNK_02b500a8 + 0x2b4fdb0));
    func_0x01438628(*(undefined4 *)(_UNK_02b500ac + 0x2b4fdbc));
    func_0x01438628(*(undefined4 *)(_UNK_02b500b0 + 0x2b4fdc8));
    func_0x01438628(*(undefined4 *)(_UNK_02b500b4 + 0x2b4fdd4));
    *pcVar3 = '\x01';
  }
  iVar7 = param_1[6];
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b500b8 + 0x2b4fdec));
  func_0x024eeca8(iVar1,0);
  uVar4 = param_1[5];
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  iVar2 = FUN_02b3dda0();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_02b4cc3c(iVar2);
  if (*(int *)(**(int **)(_UNK_02b500bc + 0x2b4fe38) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02b500c0 + 0x2b4fe54));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar2,0);
  uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02b500c4 + 0x2b4fe80));
  func_0x024eed9c(uVar4,**(undefined4 **)(_UNK_02b500c8 + 0x2b4fe94));
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  func_0x014385cc((undefined4 *)(iVar1 + 0x10),uVar4);
  iVar2 = FUN_02b3dda0();
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  FUN_02b4c81c(iVar2,uVar4,uVar5);
  if (*(int *)(**(int **)(_UNK_02b500cc + 0x2b4fee4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02b500d0 + 0x2b4ff00));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x03579aec(iVar2,**(undefined4 **)(_UNK_02b500d8 + 0x2b4ff2c),
                          **(undefined4 **)(_UNK_02b500d4 + 0x2b4ff20));
  *(undefined4 *)(iVar1 + 8) = uVar4;
  func_0x014385cc();
  uVar9 = param_1[7];
  uVar8 = param_1[8];
  uVar6 = param_1[9];
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02b500dc + 0x2b4ff60));
  func_0x0152e3ec(uVar4,iVar1,**(undefined4 **)(_UNK_02b500e0 + 0x2b4ff74),0);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  FUN_02b4e01c(iVar7,uVar5,uVar9,uVar8,uVar6,uVar4);
  *param_1 = 0xfffffffe;
  (*(code *)&UNK_0505659c)(param_1 + 1,0);
  return;
}

