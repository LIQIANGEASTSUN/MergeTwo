
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c2865c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_02c28874 + 0x2c2867c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c28878 + 0x2c28690));
    func_0x01438628(*(undefined4 *)(_UNK_02c2887c + 0x2c2869c));
    func_0x01438628(*(undefined4 *)(_UNK_02c28880 + 0x2c286a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c28884 + 0x2c286b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c28888 + 0x2c286c0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d26,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d26,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286e9ac(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c2888c + 0x2c28728));
  func_0x02c47764(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 8) = param_3;
  func_0x014385cc((undefined4 *)(iVar1 + 8),param_3);
  *(int *)(iVar1 + 0xc) = param_1;
  func_0x014385cc((int *)(iVar1 + 0xc),param_1);
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x014e94d8(iVar3,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar3,1,0);
  iVar3 = *(int *)(param_1 + 0x74);
  uVar4 = *(undefined4 *)(param_1 + 0xcc);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x014e94d8(iVar3,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar3,0,0);
  func_0x02c288a0(param_1);
  uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c28890 + 0x2c287f8));
  func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_02c28894 + 0x2c28814),0);
  if (*(int *)(**(int **)(_UNK_02c28898 + 0x2c28828) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar4 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_02c2889c + 0x2c2884c),0,uVar2,1,0);
  (*(code *)&UNK_05d3fe88)(param_1,uVar4,0);
  return;
}

