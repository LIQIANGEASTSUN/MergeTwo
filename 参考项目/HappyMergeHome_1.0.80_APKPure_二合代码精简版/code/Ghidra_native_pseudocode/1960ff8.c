
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01970ff8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01971168 + 0x197100c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0197116c + 0x1971020));
    func_0x01438628(*(undefined4 *)(_UNK_01971170 + 0x197102c));
    func_0x01438628(*(undefined4 *)(_UNK_01971174 + 0x1971038));
    func_0x01438628(*(undefined4 *)(_UNK_01971178 + 0x1971044));
    func_0x01438628(*(undefined4 *)(_UNK_0197117c + 0x1971050));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01971180 + 0x1971064) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01971184 + 0x1971080));
  piVar6 = *(int **)(_UNK_01971188 + 0x1971094);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x334);
  piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0197118c + 0x19710b8),1);
  uStack_1c = 0;
  iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_01971190 + 0x19710d8),&uStack_1c);
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

