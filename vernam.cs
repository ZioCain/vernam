public string vernam_e(string toE, string pw){
	string enc="";
	for (int k = 0, j = 0; k < toE.Length; ++k) {
		enc += (char)(toE [k] + pw [j]);
		j = (j + 1) % pw.Length;
	}
	return enc;
}
public string vernam_d(string toD, string pw){
	string enc="";
	for (int k = 0, j = 0; k < toD.Length; ++k) {
		enc += (char)(toD [k] - pw [j]);
		j = (j + 1) % pw.Length;
	}
	return enc;
}