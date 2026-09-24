
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168d1f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0168d360 + 0x168d204);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0168d364 + 0x168d218));
    func_0x01438628(*(undefined4 *)(_UNK_0168d368 + 0x168d224));
    func_0x01438628(*(undefined4 *)(_UNK_0168d36c + 0x168d230));
    func_0x01438628(*(undefined4 *)(_UNK_0168d370 + 0x168d23c));
    func_0x01438628(*(undefined4 *)(_UNK_0168d374 + 0x168d248));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0168d378 + 0x168d25c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0168d37c + 0x168d278));
  piVar6 = *(int **)(_UNK_0168d380 + 0x168d28c);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0168d384 + 0x168d2b0),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_0168d388 + 0x168d2d0),&uStack_1c);
  if (piVar6 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0))
  {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if (piVar6[3] == 0) {
    func_0x014388e8();
  }
  piVar6[4] = iVar2;
  func_0x014385cc(piVar6 + 4,iVar2);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar1,uVar7,piVar6,0);
  return;
}

