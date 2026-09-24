
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c471e0(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_02c4759c + 0x2c471f8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c475a0 + 0x2c4720c));
    func_0x01438628(*(undefined4 *)(_UNK_02c475a4 + 0x2c47218));
    func_0x01438628(*(undefined4 *)(_UNK_02c475a8 + 0x2c47224));
    func_0x01438628(*(undefined4 *)(_UNK_02c475ac + 0x2c47230));
    func_0x01438628(*(undefined4 *)(_UNK_02c475b0 + 0x2c4723c));
    func_0x01438628(*(undefined4 *)(_UNK_02c475b4 + 0x2c47248));
    func_0x01438628(*(undefined4 *)(_UNK_02c475b8 + 0x2c47254));
    func_0x01438628(*(undefined4 *)(_UNK_02c475bc + 0x2c47260));
    func_0x01438628(*(undefined4 *)(_UNK_02c475c0 + 0x2c4726c));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  uStack_24 = 0;
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x024eecb8(iVar3,0);
  pcVar2 = (char *)(_UNK_02c475c4 + 0x2c472a8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c475c8 + 0x2c472bc));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_02c475cc + 0x2c472d4) + 0x5c);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  uVar4 = *(undefined4 *)(iVar1 + 0x14);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x024ef328(iVar3,uVar6,uVar7,uVar4,0);
  if (*(int *)(**(int **)(_UNK_02c475d0 + 0x2c47314) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02c475d4 + 0x2c47330));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x029b3f20(iVar3,**(undefined4 **)(_UNK_02c475d8 + 0x2c47354),0);
  if (iVar3 < 1) {
    iVar3 = 0x27db;
  }
  if (*(int *)(**(int **)(_UNK_02c475dc + 0x2c47374) + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_02c475e0 + 0x2c47390);
  iVar1 = func_0x014e9518(*puVar8);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = FUN_02c19900(iVar5,0);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar6 = FUN_02c0c0ac(iVar5,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  FUN_02bd3648(iVar1,uVar4,iVar3,1,9,uVar6,0);
  iVar3 = func_0x014e9518(*puVar8);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = FUN_02bad050(iVar3,uVar4,0);
  if (*(int *)(**(int **)(_UNK_02c475e4 + 0x2c47450) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x0202346c(0);
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uStack_24 = *(undefined4 *)(iVar5 + 8);
  uVar4 = func_0x01524ffc(&uStack_24,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uStack_24 = *(undefined4 *)(iVar3 + 0x68);
  uVar6 = func_0x01524ffc(&uStack_24,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x020257a4(iVar1,0x2c8,uVar4,uVar6,0,0,0);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02c230dc(iVar3,**(undefined4 **)(_UNK_02c475e8 + 0x2c47520),0,0);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  FUN_02c2d7ec(iVar3,0);
  if (*(int *)(**(int **)(_UNK_02c475ec + 0x2c47550) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c475f0 + 0x2c4756c));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x0202998c(iVar3,0x12,0,0);
  return;
}

